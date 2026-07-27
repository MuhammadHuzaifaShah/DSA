#include <iostream>
using namespace std;
bool isSorted(int arr[],int n)
{
    if(n==0 || n==1) return true;

    return (arr[n-1]>=arr[n-2]) && (isSorted(arr,n-1));
}
int main() {
    int n=5;
    int arr[]={1,2,6,4,5};
    if(isSorted(arr,n))
    {
        cout << "Sorted.";
    }
    else
    {
        cout << "Not sorted";
    }
    return 0;
}