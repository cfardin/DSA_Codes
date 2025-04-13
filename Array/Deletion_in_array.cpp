#include<bits/stdc++.h>
using namespace std;

void deletion(int arr[], int& n, int p){
    if(p > n || p < 0){
        cout << "Out of bounds" << endl;
        return;
    }
    for(int i=p; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    --n;
}

int main(){
    int arr[101] = {1, 2, 3, 4, 5};
    int n = 5, p;
    cout << "Enter position of the array element : ";
    cin >> p;
    deletion(arr, n, p);
    cout << endl;
    cout << "After deleting : " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
