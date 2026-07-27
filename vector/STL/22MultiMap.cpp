#include <iostream>
#include <vector>
#include <map>
using namespace std;
 
int main()
{
    multimap<string,int> m;
    
    m.emplace("camera",600);     //  <----- m.insert({"camera",600}); 
    m.emplace("camera",600);
    m.emplace("camera",600);
    m.emplace("tv",600);

    // m.erase("camera");    // it will delete all keys related to camera

    m.erase(m.find("camera"));  // this will delete only one key where it find first
    for(auto p: m)
    {
        cout << p.first << " " << p.second << "\n";   // these print according to lexicographically
    }
   return 0;
}