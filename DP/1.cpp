#include <iostream>
#include <vector>
using namespace std;
// Recursion fabonacci
int fib(int n){
    if(n<=1){
        return n;
    }

    return fib(n-1)+fib(n-2);
}
// DP Memoization ===>Top to Bottom
// Memization =recursion+storage
int fibDP(int n,vector<int> f){
    if(n<=1){
        return n;
    }
    if(f[n] != -1){
        return f[n];
    }
    return f[n]=fibDP(n-1,f)+fibDP(n-2,f);
} 

/*
Tabulation===>Iteration + storage
1.Define the DS(data Structure)+meaning
dp[i]=f[i]   <===loops
2.Initialize with smallest Element
3.Start solivng ===> Small to big(bottom to top)
*/
int fabTabDP(int n){
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main()
{
    int n=10;
    cout << fabTabDP(n);
   return 0;
}