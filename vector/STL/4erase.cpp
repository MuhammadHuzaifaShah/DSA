#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector <int> vec1={1,2,3,4,5};

    // vec1.erase(vec1.begin());  // if we want to erase index 2 value simply + 2.

    //  if we want to delete elements in a given range 
    // st val is included but ending value is not included in erasing 

    vec1.erase((vec1.begin()+1),vec1.begin()+3);  // value at index 3 is not deleted


    /*
    --->size change
    --->capacity remain same
    
    */
    for(int val: vec1)
    {
        cout << val << " ";
    }

   return 0;
}