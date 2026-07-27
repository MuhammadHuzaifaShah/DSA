#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // if we want to save same values in vector we can simply do this
    vector <int> vec(3,10);   // 3 is the size of vector and  10 is the value


    // it is mostly used in dynamic programming ---> in tabulation
    for(int val: vec)
    {
        cout << val << " ";
    }

   return 0;
}