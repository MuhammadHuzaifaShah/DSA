#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // ---> Dynmaic in nature .
    // ---> resize according to condition

    vector<vector<int>> mat={{1,2,3},{4,5,6,7,8},{7,8,9}};  //  in 2D array {{1,2,3},{4,5,6},{7,8,9}};
    // we can change the size of on one row or one cols --->That why we preferred 2D vectors
    // rows=mat.size();
    // cols=mat[i].size();

    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat[i].size();j++){
           cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
   return 0;
}