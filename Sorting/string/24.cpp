#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int n)
{
    int ori=n;
    int num=0;
    while(n != 0)
    {
        int dig=n%10;
        num +=pow(dig,3);

        n /=10;
    }
    if(ori==num)
    {
        return true;
    }
    return false;
} 

int main()
{
    int n=15;
    if(isArmstrong(n))
    {
        cout << "Number is Arm Strong .";
    }
    else
    {
        cout << "Not an Armstrong number.";
    }
   return 0;
}