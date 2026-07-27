#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n=5;
    int arr[]={1,2,3,4,5};   // we use this to find subarrays

    for(int str=0;str<n;str++)
    {
        for(int end=str;end<n;end++)
        {
            for(int i=str;i<=end;i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
   return 0;
}