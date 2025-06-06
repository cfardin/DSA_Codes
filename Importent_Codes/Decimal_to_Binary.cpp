// Decimal to Binary code c++ 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void binary_conversion(int n){
    string binary = "";
    /// return a binary string in reverse
    while(n>0){
        int l = n%2;
        binary += ('0' + l);
        n/=2;
    }
    reverse(binary.begin(), binary.end());
    cout <<  binary << endl;
}

int main(){
    int n; cin >> n;
    binary_conversion(n);
    return 0;
}

