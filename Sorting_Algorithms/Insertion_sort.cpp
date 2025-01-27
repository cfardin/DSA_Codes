#include<iostream>
using namespace std;

void sort(int arr[], int size){
    for(int i=1; i<size; i++){
        int c = arr[i];
        int j = i-1;
        while(c < arr[j] && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = c;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
