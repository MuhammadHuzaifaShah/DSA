#include <iostream>
using namespace std;
void change(int arr[], int size) 
{
    for(int i=0;i<size;i++)
    {
        arr[i]=2*arr[i];
    }
}
int main()
{
    int size=4;
    int arr[]={2,3,4,5};

    change(arr,size);

    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
   return 0;
}