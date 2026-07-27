#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector <int> vec={1,2,3,4,5};

    // vector <int> :: reverse_iterator it;

    for(auto it=vec.rbegin();it !=vec.rend();it++)  // this is used to print reverse
    {
        cout << *(it) << " ";
    }
    cout << "\n";
    
   return 0;
}