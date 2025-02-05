#include<bits/stdc++.h>
#define M 100
using namespace std;

class Stack{
    int top;

public:
    int arr[M];

    Stack() {top = -1;}

    /// function for the push() method.
    bool push(int x){
        if(top>= M -1){
            cout << "stack overflow" << endl;
            return false;
        }
        arr[++top] = x;
        return true;
    }

    /// function for the pop() method.
    int pop(){
        if(top < 0){
            cout << "stack underflow" << endl;
            return -1;
        }
        return arr[top--];
   }

   /// peek() method, to see the top element in a stack.
   int peek(){
       if(top < 0){
        cout << "stack is empty" << endl;
        return -1;
       }
       return arr[top];
    }

   /// to check if the stack is empty or not.
   bool isEmpty(){
       return (top>0);
   }

};


int main(){
    Stack s;
    cout << "Enter the number of elements you want to enter:" << endl;
    int n;
    cin >> n;
    cout << "Enter the elements :" << endl;
    for(int i=0; i<n; i++){
        int e;
        cin >> e;
        s.push(e);
    }
    s.pop() /// this will remove the top element
    cout << s.peek() << endl; /// to see the new top element 

}
