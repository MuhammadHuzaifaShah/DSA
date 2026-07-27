#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
 
int main()
{
    deque<int> d={1,2,3,4,5};
    

    for(int val: d)
    {
        cout << val << " ";
    }

    cout << "\n";

    cout << d[2] << "\n";

    // but in list it is not possible
   return 0;

}