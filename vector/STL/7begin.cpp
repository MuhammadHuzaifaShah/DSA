#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector <int> vec={1,2,3,4,5};


    cout << "Begin : " << *(vec.begin()) << "\n";
    cout << "end : " << *(vec.end() )<< "\n";

   return 0;
}