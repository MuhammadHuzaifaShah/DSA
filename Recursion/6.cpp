#include <iostream>
using namespace std;
void getPermutation(string str,int i)
{
    int len=str.length();
    if(i==len)
    {
        for(int j=0;j<len;j++)
        {
            cout << str[j];
        }
        cout << endl;
        return;
    }

    
    // backtracking
    for(int j=i;j<len;j++)
    {
        swap(str[i],str[j]);
        getPermutation(str,i+1);
        swap(str[i],str[j]);
    }

}
int main()
{
    string str="abc";
    getPermutation(str,0);
   return 0;
}