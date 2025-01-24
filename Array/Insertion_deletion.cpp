#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[], int& n, int pos, int value){
    if(pos >= n){
        cout << "Out of order" << endl;
        return;
    }
    for(int i=n; i>pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    n++;
}
void deletion(int arr[], int& n, int pos){
    if(pos >= n || pos < 0){
        cout << "out of order" << endl;
        return;
    }
    for(int i=pos; i< n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
}


int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array :" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    ///inserting an element
    cout << "Position and Number :";
    int p, in;
    cin >> p >> in;
    insertion(arr, n, p, in);
    cout << "After inserting :" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    ///removing an element
    cout << "Position of the number to remove: ";
    cin >> p;
    deletion(arr, n, p);
    cout << "After removing :" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
