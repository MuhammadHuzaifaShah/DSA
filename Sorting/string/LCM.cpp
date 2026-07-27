#include <iostream>
using namespace std;

int gcdRec(int a,int b)  // recursive approad
{
    if(b==0) return a;

    return gcdRec(b,a%b);
}

int main()
{
    int a=30;
    int b=20;
    
    cout << "LCM is : " << (a*b)/gcdRec(a,b) << "\n";



   return 0;
}