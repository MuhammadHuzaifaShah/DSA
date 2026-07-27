#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector <int> vec={1,2,3,4,5};

    // vector <int> :: iterator it;  we use auto instead of this

    for(auto it=vec.begin();it !=vec.end();it++)  // 
    {
        cout << *(it) << " ";
    }
    cout << "\n";
    

   return 0;
}