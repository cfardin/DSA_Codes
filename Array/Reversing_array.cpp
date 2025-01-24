#include<iostream>
using namespace std;

void rev(int arr[], int n){
    int temp[n];
    for(int i=0; i<n; i++){
        temp[i] = arr[n-i-1];
    }
    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    rev(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

  return 0;
}
