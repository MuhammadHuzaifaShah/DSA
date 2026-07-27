#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector <int> vec; 

    cout <<"Size of vector is : "<< vec.size() << "\n";
    cout <<"Capacity of vector is : "<< vec.capacity() << "\n";
   
    // vec.push_back(1);  // O(1)  time complexity
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);  /// we can simply initialize vector with the values
    // vec.push_back(5);
    // vec.emplace_back(6); // .push_back and emplace_back push data at the last

    vec={1,2,3,4,5,6};

    vec.pop_back();  // delete last element of vector

    cout <<"After push back size is :" <<  vec.size() << "\n";
    cout <<"After push back Capacity of vector is : "<< vec.capacity() << "\n";

    for(int val : vec)
    {
        cout << val << " ";
    }
    cout << "\n";

    cout <<"Value at index 2 is : " << vec.at(2) <<" or "<< vec[2] << "\n";  

    cout << "Vector at front is " << vec.front() << "\n";
    cout << "Vector at end is " << vec.back() << "\n";
   return 0;
}