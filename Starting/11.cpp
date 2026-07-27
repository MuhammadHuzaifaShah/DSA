#include <iostream>
#include <climits>
#include <algorithm>\


// use to find smallest
using namespace std;
 
int main()
{
    int arr[5]={12,10,-15,20,25};
    int smallest=INT_MAX;
    int largest=INT_MIN;

    
    for(int i=0;i<5;i++)
    {

        smallest=min(arr[i],smallest);
        largest=max(arr[i],largest); 
    }

    cout << "Smallest = " << smallest << "\n";
    cout << "Largest = " << largest << "\n";
   return 0;
}