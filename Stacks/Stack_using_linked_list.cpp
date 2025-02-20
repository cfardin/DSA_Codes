#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *top = 0;

void push(int x){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = x;
    newnode -> next = top;

    top = newnode;
}

void pop(){
    struct node *temp;
    temp = top;
    if(top == NULL) cout << "Stack is empty" << endl;
    else{
        top = top -> next;
        free(temp);
    }
}
void peek(){
    if(top== NULL) cout << "Stack is empty" << endl;
    else{
        printf("%d\n", top->data);
    }
}

void display(){
    struct node *temp;
    temp = top;
    if(top == NULL){
        cout << "Stack is empty" << endl;
    }
    else{
        while(temp!=NULL){
            printf("%d ", temp -> data);
            temp = temp -> next;
        }
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    display();
    pop();
    peek();
    return 0;
}
