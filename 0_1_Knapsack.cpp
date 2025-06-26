#include<bits/stdc++.h>
using namespace std;

int dp[10][10];

int ks(int n, int c, int wt[], int pro[]){
    if(n == 0 || c == 0) return 0;
    if(dp[n][c] != -1) return dp[n][c];

    if(wt[n-1]>c)
        return dp[n][c]=ks(n-1, c, wt, pro);
    else
        return dp[n][c]=max(ks(n-1, c, wt, pro), pro[n-1] + ks(n-1, c - wt[n-1], wt, pro));

}


int main(){
    int profit[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int n = 3; /// size
    int capacity = 50;

    memset(dp, -1, sizeof(dp));

    cout << ks(n, capacity, wt, profit) << endl;

}
