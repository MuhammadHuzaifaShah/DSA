#include <iostream>
using namespace std;
// reverse a string using recursion
void reverseString(string &str,int i)
{
    int len=str.length();
    if(i>=len/2)
    {
        return;
    }
    swap(str[i],str[len-i-1]);
    reverseString(str,i+1);
}
int main()
{
    string str="abcde";
    reverseString(str,0);
    cout << str;
   return 0;
}