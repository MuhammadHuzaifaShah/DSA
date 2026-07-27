#include <iostream>
using namespace std;

int binToDec(int bin)
{
    int dec=0;
    int pow=1;

    while(bin>0)
    {
        int rem=bin%10;
        bin=bin/10;
        dec += (rem*pow);
        pow *=2;
    }
    return dec;
} 
int main()
{
    int bin;
    cout << "Enter binary Number: ";
    cin >> bin;

    int dec=binToDec(bin);
    cout << "Binary number is: " << dec << "\n";

   return 0;
}