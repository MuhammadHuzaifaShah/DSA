#include <iostream>
using namespace std;

int fab(int n)
{
    int n0=0;
    int n1=1,n2;
    for(int i=1;i<n;i++)
    {
        n2=n0+n1;
        n0=n1;
        n1=n2;
    }
    return n2;

} 
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int fabo=fab(n);

    cout << fabo;
   return 0;
}