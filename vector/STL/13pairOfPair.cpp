#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    pair<string, pair<int,int >> p={"Huzaifa",{5,3}};  // we can make pair of different data types



    cout << p.first << "\n";
    cout << p.second.first << "\n";
    cout << p.second.second << "\n";

   return 0;
}