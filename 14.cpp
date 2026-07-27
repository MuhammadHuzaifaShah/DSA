#include <iostream>
using namespace std;

int linearSearch(int arr[],int size, int num)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size=5;
    int arr[]={1,2,3,4,5};
    int position=linearSearch(arr,size,6);
    if(position==-1)
    {
        cout << "Number is not found .";
    }
    else
    {
        cout << "Number is found at Index " << position << "\n"; 
    }
   return 0;
}