#include<bits/stdc++.h>
using namespace std;

/// fibonacci series using DP(Memoization) 
/// fibonacci series of n(th) number (0 to n)
int fibo(int n){
    int dp[n+1];
    memset(dp, -1, sizeof(dp));
    if(n <= 1) return n;
    if(dp[n]!= -1) return dp[n];
    dp[n] = fibo(n - 1) + fibo(n - 2);
    return dp[n];
}

int main(){
    int n;
    cin >> n;

    cout << fibo(n) << endl;
}
