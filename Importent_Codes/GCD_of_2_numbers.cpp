#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
  int a = 2, b = 4;
  cout << gcd(a, b) << endl;
}
