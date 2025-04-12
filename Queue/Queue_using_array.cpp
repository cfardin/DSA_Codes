#include<bits/stdc++.h>
using namespace std;
#define N 50

class Queue{
    int f, b, arr[N];
public:
    Queue(){
        f = 0;
        b = -1;
    }

    void enqueue(int x){
        if(b >= N - 1){
            cout << "Queue overflow" << endl;
            return;
        }
        arr[++b] = x;
        return;
    }

    void dequeue(){
        if(f > b){
            cout << "Queue underflow" << endl;
            return;
        }
        f++;
    }

    int peek(){
        if(f>b){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[f];
    }

    bool isEmpty(){
        return (f>b);
    }
};

int main(){
    cout << "Enter the number of elements you want to take input: ";
    int n; cin >> n;
    Queue q;
    for(int i=0; i<n; i++){
        int input;
        cin >> input;
        q.enqueue(input); /// taking input 
    }
    cout << endl;
    
    q.dequeue(); /// removing the top element 
    cout << "the top element : ";
    cout << q.peek() << endl;
  
return 0;
}
