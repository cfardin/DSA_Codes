/*
Dice Combinations (CSES problem)
Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and  6.
For example, if n=3, there are 4 ways:

1+1+1
1+2
2+1
3
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1000000007;
ll dp[1000001];

void solve(){
    ll n; cin >> n;

    dp[0] = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=6 && i-j >=0; j++){
            dp[i] = (dp[i] + dp[i-j]) % MOD;
        }
    }
    cout << dp[n] << endl;
}


int main(){
  //  ios :: sync_with_stdio(false);
  //  cin.tie(0);

    solve();
    return 0;

}
