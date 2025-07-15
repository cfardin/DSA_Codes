#include<bits/stdc++.h>
using namespace std;

// Activity selection code
struct activity{
	int a, b;	
};

// A custom compare function for sorting according to end time.
bool comp(activity x, activity y){
	return x.b < y.b;
}

int main(){
	int n;
	cin >> n; // number of activitys

	activity arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i].a >> arr[i].b;
	} 

	sort(arr, arr + n, comp); 

	int count = 1; // Number of activity that can be done, 

	int last_end = arr[0].b;

	for(int i=1; i<n; i++){
		if(arr[i].a >= last_end){
			count++;
			last_end = arr[i].b;
		}
	}

	cout << count << endl;

	return 0;
}
