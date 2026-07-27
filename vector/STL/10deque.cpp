#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
 
int main()
{
    deque<int> d;
    d.emplace_back(1); //or we can use push_back(1)  similar to list
    d.push_back(2);
    d.push_front(4);
    d.push_front(5);

    for(int val: d)
    {
        cout << val << " ";
    }

    cout << "\n";

    d.pop_back();
    d.pop_front();

    for(int val: d)
    {
        cout << val << " ";
    }

    cout << "\n";
   return 0;

}