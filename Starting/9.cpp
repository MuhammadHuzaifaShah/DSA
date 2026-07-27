#include <iostream>
#include <climits>
#include <algorithm>\


// use to find smallest
using namespace std;
 
int main()
{
    int arr[5]={12,10,-15,20,25};
    int min=INT_MAX;
    
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];  // smallest=min(arr[i],smallest);
        } // this can be done using algorithem to find minimum value in an array 
    }

    cout << min << "\n";
   return 0;
}