#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void Decimal_conversion(string n){
    int decimal = 0;
    int base = 1;
    for(int i = n.size() - 1; i>=0; i--){
        int last = n[i] - '0'; /// Converts single digits to integer
        decimal += last * base ;
        base *= 2;
    }
    cout << decimal << endl;
}

int main(){
    string n; cin >> n;
    Decimal_conversion(n);
    return 0;
}

