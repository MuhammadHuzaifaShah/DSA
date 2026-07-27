#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector <int> vec={1,2,3,4,5};

    vec.clear();

    cout << "Size : " << vec.size()<< "\n";
    cout << "Is empty : " << vec.empty() << "\n";
    cout << "capacity : " << vec.capacity();
     for(int val: vec)
    {
        cout << val << " ";
    }
    cout << "\n";
   return 0;
}