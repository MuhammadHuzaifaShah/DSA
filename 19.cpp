#include <iostream>
using namespace std;

void change(int &b) // pass by reference using alias
{
    b=20;
} 
int main()
{
    int a=5;
    change(a);
    cout << "a = " << a << "\n";
   return 0;
}