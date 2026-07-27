#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector <char> vec={'a','b','c','d','e'};

    cout << "Size = " << vec.size() << "\n";
    for(char val: vec)
    {
        cout << val << "\n";
    }
   return 0;
}