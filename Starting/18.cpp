#include <iostream>
using namespace std;
 

void change(int* a)   // pass by reference using pointer
{
    *a=120;
}
int main()
{
    int a=10;
    change(&a);
    cout << "Inside main: " << a << "\n";
   return 0;
}