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


int main(){
    int arr[101] = {10, 20, 30, 40, 50};
    int n = 5; // elements in array

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
    
    return 0;
}
