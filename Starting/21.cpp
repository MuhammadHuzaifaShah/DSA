#include <iostream>
using namespace std;
 
int main()
{
    int a=10;
    int* p=&a;

    cout << p << "\n";
    p++;
    cout << p << "\n";
    p--;
    cout << p << "\n";
    p=p+2;
    cout << p << "\n";


   return 0;
}