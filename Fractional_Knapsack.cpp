#include<bits/stdc++.h>
using namespace std;

struct item{
	int value, weight;
	// Constructor 
	item(int value, int weight){
		this -> value = value;
		this -> weight = weight;
	}
};

bool comp(struct item a, struct item b){
	double r1 = (double)a.value / (double)a.weight;
	double r2 = (double)b.value / (double)b.weight;

	return r1 > r2;
}

double f_knapsack(int wt, struct item arr[], int n){

	// Sorting item based on there fractional value of per unit value.
	sort(arr, arr+n, comp);

	double ans = 0.0;

	for(int i=0; i<n; i++){
		if(arr[i].weight <= wt){
			wt -= arr[i].weight;
			ans += arr[i].value; 
		}
		else{
			ans += arr[i].value * ((double)wt / (double)arr[i].weight);
			break;
		}
	}

	return ans;
}

int main(){
	item arr[] = {{60, 10}, {100, 20}, {120, 30}};
	int wt = 50; // weight limit
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << f_knapsack(wt, arr, n) << endl; 
	return 0;
}
