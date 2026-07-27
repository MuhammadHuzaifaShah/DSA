#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string str="Huzaifa shah";  // ===> runtime resize
    cout << str << "\n";

    str ="Hello";
    cout << str << "\n";   // string are dynamic in nature 

    char ch[]="Huzaifa Shah";

    // ch="Hello";   this will show error

   return 0;
}