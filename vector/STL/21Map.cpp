#include <iostream>
#include <vector>
#include <map>
using namespace std;
 
int main()
{
    map<string,int> m;
    
    m["tv"]=100;
    m["headPhones"]=200;
    m["laptop"] =300;     
    m["mobile"] =400;    
    m["tab"] =500;    
    m.erase("tv");
    
    m.emplace("camera",600);     //  <----- m.insert({"camera",600}); 

    for(auto p: m)
    {
        cout << p.first << " " << p.second << "\n";   // these print according to lexicographically
    }

    cout << "Count = " << m.count("laptop") << "\n";
    cout << "value = " << m["laptop"] << "\n";

    if(m.find("camera") != m.end())
    {
        cout << "Found ." << "\n";
    }
    else
    {
        cout << "Not Found ." << "\n";
    }


   return 0;
}