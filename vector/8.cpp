#include <iostream>
#include <climits>
#include <vector>
using namespace std;
 
int main()
{
    int n=5;
    int arr[]={1,2,3,4,5};   // we use this to find maximum subarrays sum

    int maxSum=INT_MIN;
    int currSum=0;

    for(int i=0;i<n;i++)
    {
        currSum +=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0)
        {
            currSum=0;
        }     
    }

    cout << "Maximum sum is : " <<maxSum;
   return 0;
}