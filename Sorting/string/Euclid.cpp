#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    while(a >0 && b>0)
    {
        if(a>b)
        {
            a =a%b;
        }
        else
        {
            b= b%a;
        }
    }
    if(a==0)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int gcdRec(int a,int b)
{
    if(b==0) return a;

    return gcdRec(b,a%b);
}
int main()
{
    int a=20;
    int b=20;
    int gc=gcd(a,b);


    cout << "GCD is : " << gc << "\n";
    cout << "GCD is : " << gcdRec(a,b) << "\n";



   return 0;
}