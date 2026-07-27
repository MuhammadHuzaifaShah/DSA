#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
 
int main()
{
    unordered_map<string,int> m;

    m.emplace("camera",600);     //  <----- m.insert({"camera",600});
    m.emplace("tv",300);
    m.emplace("cooller",400);
    m.emplace("tab",500);

    for(auto p: m)
    {
        cout << p.first << " " << p.second << "\n";   // these print according to lexicographically
    }

   return 0;
}