#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data=val;
            left=right=NULL;
        }
}; 
static int idx=-1;
Node* buildTree(vector<int> preOrder){
    idx++;

    if(preOrder[idx]==-1){
        return NULL;
    }

    Node* root=new Node(preOrder[idx]);
    root->left=buildTree(preOrder);
    root->right=buildTree(preOrder);

    return root;
}
class Info{
    public:
        int min,mx,sz;
        Info(int mn,int max,int size){
            min=mn;
            mx=max;
            sz=size;
        }
};

Info helper(Node* root){
    if(root==NULL){
        return Info(INT_MAX,INT_MIN,0);
    }
    Info left=helper(root->left);
    Info right=helper(root->right);

    if(root->data > left.mx && root->data < right.min){
        int currMin=min(root->data,left.min);
        int currMax=max(root->data,right.mx);
        int currSz=left.sz+right.sz+1;

        return Info(currMin,currMax,currSz);
    }

    return Info(INT_MIN,INT_MAX,max(left.sz,right.sz));
}

int largestBSTinBT(Node* root){
    Info info=helper(root);
    return info.sz;
}
int main()
{
    Node* root=new Node(10);
    root->left=new Node(5);
    root->right=new Node(15);
    root->left->left=new Node(1);
    root->left->right=new Node(8);
    root->right->right=new Node(7);


    cout << largestBSTinBT(root);
   return 0;
}