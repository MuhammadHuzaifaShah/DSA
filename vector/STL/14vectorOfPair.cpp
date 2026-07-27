#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector <pair <int ,int >> vec={{1,2,},{3,4},{5,6},{7,8}};

    vec.push_back({9,10});


    vec.emplace_back(11,12);   // when we use emplace back we donot need to make pair
    // in-place object creates
    for(auto p: vec)     // pair<int,int> p: vec ,we can use auto
    {
        cout << p.first << " " << p.second << "\n";
    }
   return 0;
}