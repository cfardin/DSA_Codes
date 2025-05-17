#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int target){
    int low = 0;
    int high = n - 1;

    while(low <= high){
        int middle = low + (high -  low)/2 ;
        int value = arr[middle];

        if(value < target)
            low = middle + 1;
        else if(value > target)
            high = middle -1;
        else return middle; /// target is found;

    }
    return -1;
}

int main(){
    int n = 100;
    int arr[n];
    for(int i=1; i<=n; i++){
        arr[i-1] = i;
    }
    int target = 7; 
    int index = binarysearch(arr, n, target);

    if(index == -1) cout << target << " Not found" << endl;
    else cout << target << " found at index :" << index << endl;


    return 0;
}
