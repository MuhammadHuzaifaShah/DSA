#include <iostream>
#include <climits>
#include <vector>
using namespace std;
 
int main()
{
    int n=5;
    int arr[]={1,2,3,4,5};   // we use this to find maximum subarrays sum

    int maxSum=INT_MIN;

    for(int str=0;str<n;str++)
    {
        int currSum=0;
        for(int end=str;end<n;end++)
        {
            currSum  +=arr[end];
            maxSum=max(currSum,maxSum);
        }
    }

    cout << "Maximum sum is : " <<maxSum;
   return 0;
}