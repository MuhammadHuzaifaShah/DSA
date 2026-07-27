#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{

    // int arr[]={1,3,2,5,4};   //  sort(ar,arr+5);
    vector<int> vec={1,3,2,5,4};   //  sort(vec.begin(),vec.end()); for assending order 

    sort(vec.begin(),vec.end(),greater<int>());   // for descending order

    for(int val: vec)
    {
        cout << val << " ";
    }
   return 0;
}