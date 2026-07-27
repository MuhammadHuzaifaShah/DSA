#include <iostream>
using namespace std;
 
bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if(isPrime(n))
    {
        cout << "Number is not Prime.";
    }
    else
    {
        cout << "Number is Prime.";
    }
   return 0;
}