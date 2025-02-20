#include<iostream>
#include<ctype.h>
#include<string>
#include<stack>
using namespace std;

/// in this code we are using STL version of stack.
int prefix_sum(string s){
    stack<int> sum;
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        if(isdigit(ch)){
            sum.push(ch - '0');
        }
        else{
            int v2 = sum.top(); sum.pop();
            int v1 = sum.top(); sum.pop();
            switch(ch){
                case '+': sum.push(v1 + v2);
                break;
                case '-': sum.push(v1 - v2);
                break;
                case '*' : sum.push(v1 * v2);
                break;
                case '/' : sum.push(v1 / v2);
                break;
            }
        }
    }
    return sum.top();
}

int main(){
    string s;
    cin >> s;
    cout << prefix_sum(s) << endl;
}
