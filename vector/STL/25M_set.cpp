#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;
 
int main()
{
    multiset<int> s;


    s.emplace(1);
    s.emplace(2);
    s.emplace(3);
    s.emplace(4);
    s.emplace(5);

    s.emplace(1);
    s.emplace(2);
    s.emplace(3);

    cout << "size : " << s.size() << "\n";

    for(int set: s)
    {
        cout << set << " ";
    }
   return 0;
}