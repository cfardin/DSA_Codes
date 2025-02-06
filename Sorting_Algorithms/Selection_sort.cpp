#include<iostream>
#include<vector>
using namespace std;

void insertion(vector<int>& arr, int n){
    for(int i=0; i<n-1; i++){
        int m = i; /// the minimum value
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[m])
                m = j;
        }
        /// swap values with the minimum value
        //int temp = arr[i];
        //arr[i] = arr[m];
        //arr[m] = temp;
        swap(arr[i], arr[m]);
    }
}

int main(){
    vector<int> arr = {3, 1, 4, 5, 2};
    int n = arr.size();

    insertion(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
