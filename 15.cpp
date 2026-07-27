#include <iostream>
using namespace std;
 
int main()
{
    int arr1[]={1,2,4,3,5};
    int arr2[]={2,3,6,7};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }   
    return 0;
}