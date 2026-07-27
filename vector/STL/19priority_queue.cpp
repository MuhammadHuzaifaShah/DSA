#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
 
int main()
{
    priority_queue<int> q;
    q.push(1);
    q.push(5);
    q.push(4);
    q.push(10);

    while(!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
   return 0;
}