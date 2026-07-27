#include <iostream>
using namespace std;
 
int main()
{
    string str;


    cout << "Enter String : ";
    // cin >> str;   by this we can enter on word ,after space nothin is going to print
    getline(cin,str);   //  getline(cin,str, '$') we can also add delimitor

    cout << "String is : " << str << "\n";
   return 0;
}