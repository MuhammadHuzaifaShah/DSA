#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
   vector<pair<int,int>> vec={{2,3},{1,5},{7,6},{4,9}};


   sort(vec.begin(),vec.end());

   for(auto val: vec)
   {
      cout << val.first << " " << val.second << "\n";
   }
   return 0;
}