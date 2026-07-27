#include <iostream>
using namespace std;
 
int main()
{
    string str1="Huzaifa ";
    string str2="Shah";

    string str=str1+str2;  // we can combine two string  ---> concatenation (in term of coding)

    cout << str << "\n";
    cout << str1.length() << "\n";  //In built function

    cout << (str1==str2) << "\n";   // we can compare two string eassily
    cout << (str1<str2) << "\n";   // it compare terms on the bases of first character ---> lexicographically

   return 0;

}