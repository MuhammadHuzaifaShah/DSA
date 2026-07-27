#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    string str="Huzaifa";

    int st=0,end=str.length()-1;
    while(st<end)
    {
        swap(str[st],str[end]);
        st ++;
        end --;
    }

    cout << str << "\n";

    // we can use reverse(str.begin(),str.end());
   return 0;
}