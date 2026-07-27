#include <iostream>
using namespace std;
 
int main()
{
    int a=10;
    int *ptr=&a;
    int** pptr=&ptr;
    cout << &ptr << "\n";
    cout << pptr << "\n";
    cout << *(&a) << "\n";
    cout << *(ptr) << "\n";
    cout << *(pptr) << "\n";
    cout << *(*(pptr)) << "\n";
   return 0;
}