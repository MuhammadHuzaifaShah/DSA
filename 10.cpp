#include <iostream>
#include <climits>
#include <algorithm>


// use to find largest
using namespace std;
 
int main()
{
    int arr[5]={12,10,-15,20,25};
    int max=INT_MIN;
    
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];  // largest=min(arr[i],largest);
        } // this can be done using algorithem to find minimum value in an array 
    }

    cout <<  max << "\n";
   return 0;
}