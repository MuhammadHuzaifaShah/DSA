#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // vector <int> vec(5,0);
    vector <int> vec={1,2,4,3};
    for(int i: vec)
    {
        cout << i << "\n";
    }
   return 0;
}