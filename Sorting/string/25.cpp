#include <iostream>
using namespace std;
int diogonalSum(int mat[][3],int n)
{
    // int dSum=0;
    // int pDSum=0;
    // int sDSum=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(i==j)
    //         {
    //             pDSum +=mat[i][j];
    //         }
    //         else if(j==n-1-1)
    //         {
    //             sDSum +=mat[i][j];  ---> time Complexity O(n^2)
    //         }
    //     }
    // }
    // dSum=sDSum+pDSum;
    // return dSum;
    int dSum=0;
    for(int i=0;i<n;i++)  // time complexity is O(n)
    {
        dSum +=mat[i][i];

        if(i !=n-1-i)
        {
            dSum +=mat[i][n-1-i];
        }
    }

    return dSum;
}
int main()
{
    int n=3;
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    cout << "Diogonal sum is : " << diogonalSum(matrix,n);

   return 0;
}