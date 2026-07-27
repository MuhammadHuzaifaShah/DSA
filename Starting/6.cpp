#include <iostream>
using namespace std;

int decToBin(int dec)
{
    int bin=0;
    int pow=1;

    while(dec>0)
    {
        int rem=dec%2;
        dec=dec/2;
        bin += (rem*pow);
        pow *=10;
    }
    return bin;
} 
int main()
{
    int dec;
    cout << "Enter decimal Number: ";
    cin >> dec;

    int bin=decToBin(dec);
    cout << "Binary number is: " << bin << "\n";

   return 0;
}