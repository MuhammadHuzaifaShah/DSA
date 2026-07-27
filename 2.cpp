#include <iostream>
using namespace std;
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact *=i;
    }
    return fact;
}

int nCr(int n,int r)
{
    int fact_n=fact(n);

    int fact_r=fact(r);

    int fact_n_r=fact(n-r);

    return fact_n/(fact_r*fact_n_r);
}

int main()
{
    int n,r;

    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of r: ";
    cin >> r;

    int bi_Co_eff=nCr(n,r);
    
    

    cout << "Binomial coefficient is: " << bi_Co_eff;

   return 0;
}