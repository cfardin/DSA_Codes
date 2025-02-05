#include<iostream>
using namespace std;

merge(int arr[], int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r - m;

    int left[n1];
    int right[n2];
    for(int i=0; i<n1; i++){
        left[i] = arr[l + i];
    }
    for(int j=0; j<n2; j++){
        right[j] = arr[m+1+j];
    }

    /// the merging process
    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
/// last part, if there are any remaining elements in sub arrays
    while(i<n1){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = right[j];
        j++;
        k++;
    }
}


void merge_sort(int arr[], int l, int r){
    if(l<r){
        int mid = l + (r - l)/2;

        /// left side tree
        merge_sort(arr, l, mid);
        /// right side tree
        merge_sort(arr, mid+1, r);
        /// to merge every sides
        merge(arr, l, mid, r);
    }
}

int main(){
    int arr[] = {2, 5, 1, 8, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int left = 0, right = (n-1);

    cout << "Original array: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    merge_sort(arr, left, right);
    cout << "Sorted array: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
