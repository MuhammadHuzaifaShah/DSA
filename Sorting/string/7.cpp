#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    string str="racecar";

    string str1=str;

    int st=0,end=str.length()-1;
    while(st<end)
    {
        swap(str[st],str[end]);
        st ++;
        end --;
    }

    if(str==str1)
    {
        cout << "Valid pallindrome .";
    }
    else
    {
        cout << "Invalid Palindrome";
    }
    
   return 0;
}