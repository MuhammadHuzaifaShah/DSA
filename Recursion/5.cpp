#include <iostream>
#include <vector>
using namespace std;
 
int bin(vector<int> v,int tar,int st,int end)
{
    if(st<=end)
    {
        int mid=st+(end-st)/2;
        if(v[mid]==tar)
        {
            return mid;
        }
        else if(v[mid]<=tar)
        {
            return bin(v,tar,mid+1,end);
        }
        else
        {
            return bin(v,tar,st,mid-1);
        }
    }
    return -1;
}
int main()
{
    vector <int> v={-1,0,3,6,7,9};
    int n=v.size();
    int tar=9;
    int st=0;
    int end=n-1;
    int ans=bin(v,tar,st,end);
    cout << "Number found at index " << ans ;
   return 0;
}