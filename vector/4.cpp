#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector <int> vec;
    cout << "size = " << vec.size() << "\n";
    vec.push_back(25);  // add variable and size
    vec.push_back(35);
    vec.push_back(45);
    cout << "After push back size = " << vec.size() << "\n";
    for(int val: vec)
    {
        cout << val << "\n";
    }

    cout << "First value = " <<vec.front() << "\n";  // prints first value
    cout << "Last value = " << vec.back() << "\n";  // prints last value

    cout << vec.at(2) << "\n";

    vec.pop_back();   // delete last variable and size
    cout << "After Pop back size = " << vec.size() << "\n"; 

    for(int val: vec)
    {
        cout << val << "\n";
    }

    
   return 0;
}