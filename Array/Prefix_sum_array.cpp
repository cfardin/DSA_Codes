#include<iostream>
using namespace std;

void prefix_sum(int arr[], int n, int p[]){
    p[0] = arr[0];
    for(int i=1; i<n; i++){
        p[i] = p[i-1] + arr[i];
    }
}

int main(){
    int arr[] = {10, 15, 20 , 30, 45, 60};
    int n = sizeof(arr)/sizeof(arr[0]);

    int prefix[n];

    prefix_sum(arr, n, prefix);

    for(int i: prefix){
        cout << i << " ";
    }
}
