#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    // char str[]={'a','b','c','\0'};   // when we add \0 at the end it become a valid string
    // char st[]="Hello";   // this is also a valid argument  <--- string literal
    // cout << str << "\n" ;
    // cout <<"String lenght : " << strlen(str) << "\n" ;
    // cout << st << "\n" ;
    // cout <<"String lenght : " << strlen(st) << "\n" ;
    // cout << st[2] << "\n" ;
    // cout << st[5] << "\n" ;

    char sa[10];

    cin.getline(sa,10);  

    /* '$' act as delimiter when we enter $ then it does not print
     any thing after this */

    for(char ch: sa)
    {
        cout << ch << " ";
    }
     cout << "\n";

    return 0;
}