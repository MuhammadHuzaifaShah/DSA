#include <iostream>
#include <climits>
#include <algorithm>


// use to find smallest
using namespace std;
 
int main()
{
    int arr[5]={12,10,-15,20,25};
    int min=INT_MAX;
    int max=INT_MIN;
    int minIndex,maxIndex;
    
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
        {

            min=arr[i];
            minIndex=i;
        } 

        if(arr[i]>max)
        {
            max=arr[i];
            maxIndex=i;
        } 
    }


    cout << "Minimum Index : " << minIndex << "\n";
    cout << "Maximum Index : " << maxIndex << "\n";
   return 0;
}