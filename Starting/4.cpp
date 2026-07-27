#include <iostream>
using namespace std;
 
bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}


void prime(int num)
{
    for(int i=2;i<=num;i++)
    {
        if(isPrime(i))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    prime(n);
   return 0;
}