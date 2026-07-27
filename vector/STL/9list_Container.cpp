#include <iostream>
#include <vector>
#include <list>
using namespace std;
 
int main()
{
    list<int> l;
    l.emplace_back(1); //or we can use push_back(1)
    l.push_back(2);
    l.push_front(4);
    l.push_front(5);

    for(int val: l)
    {
        cout << val << " ";
    }

    cout << "\n";

    l.pop_back();
    l.pop_front();

    for(int val: l)
    {
        cout << val << " ";
    }

    cout << "\n";

    // cout << l[2];   it si not possible
   return 0;
}