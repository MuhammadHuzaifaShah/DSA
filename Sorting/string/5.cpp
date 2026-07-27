#include <iostream>
using namespace std;
 
int main()
{
    string str="Huzaifa Shah";


    for(int i=0;i<str.length();i++)
    {
        cout << str[i]  << " ";
    }
    cout << "\n";


    //  we can also use for each loop to print all characters

    for(char ch: str)
    {
        cout << ch << " ";
    }
    cout << "\n";
   return 0;
}