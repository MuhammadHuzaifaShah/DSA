#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 

bool comparator(pair<int, int> p1,pair<int, int> p2)
{
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    if(p1.first<p2.first) return true; // if second value is same than compare first values
    else return false;

}


// thsi sort the function on the bases of second element
int main()
{
   vector<pair<int,int>> vec={{2,3},{1,3},{7,6},{4,9}};


   sort(vec.begin(),vec.end(),comparator);

   for(auto val: vec)
   {
      cout << val.first << " " << val.second << "\n";
   }
   return 0;
}