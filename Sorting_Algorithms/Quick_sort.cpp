#include<bits/stdc++.h>
using namespace std;

int par(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l-1;
    for(int j = l; j < r; j++){
        if(arr[j]< pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[r]);
    return i;
}

void quick(int arr[], int left, int right){
    if(left < right){
        int pivot = par(arr, left, right);
        quick(arr, left, pivot - 1);
        quick(arr, pivot + 1, right);
    }
}


int main(){
    int arr[] = {4, 1, 5, 3, 2};
    int n = 5;
    for(int i : arr) cout << i << " ";

    cout << endl;

    quick(arr, 0, n-1);
    for(int i : arr) cout << i << " ";
    return 0;
}
