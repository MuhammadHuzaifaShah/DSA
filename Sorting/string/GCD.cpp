#include <iostream>
using namespace std;
 
int main()
{
    int a=20,b=28;
    int gcd=1;
    if(a==0)
    {
        gcd=b;
    }
    if(b==0)
    {
        gcd=a;
    }
    for(int i=1;i<=min(a,b);i++)  //O(min(a,b))
    {
        if(a %i==0 && b%i==0)
        {
            gcd=i;
        }
    }

    cout << "GCD of numbers is : " << gcd << "\n";
   return 0;
}