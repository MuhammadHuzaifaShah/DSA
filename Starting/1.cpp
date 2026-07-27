#include <iostream>
using namespace std;


int sumOfDigits(int num)
{
    int lastDigit;
    int sumDigits=0;
    while(num>0)
    {
        lastDigit=num%10;
        num=num/10;
        sumDigits +=lastDigit;
    }
    return sumDigits;
}
 
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sumDigits=sumOfDigits(1233);

    cout << sumDigits ;
   return 0;
}