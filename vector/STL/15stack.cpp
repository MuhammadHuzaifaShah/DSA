#include <iostream>
#include <vector>
#include <stack>

//|-------|
//|   3   |
//|-------|
//|   2   |
//|-------|
//|   1   |
//|-------|
using namespace std;
 
int main()
{
    stack<int> s;  
    s.push(1);     
    s.push(2);   
    s.push(3);  

    cout << s.top() << " ";

   return 0;
}