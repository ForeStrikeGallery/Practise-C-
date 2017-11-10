#include<iostream>
#include<climits>
using namespace std;

int min(int a, int b) {
	return a<b?a:b;
}
int find_smallest(int* arr, int k) {
	if (k == 0)
		return -1;
	int smallest = INT_MAX;
	int smallest_index = 0;
	for(int i=0; i<k; i++) {
		if (arr[i] < smallest) {
			smallest = arr[i];
			smallest_index = i;
		}
	} 

	return smallest_index;

}


int find_sum(int i, int j, int *a, int *p) {
	int weight_sum = 0;
	for (int k=i; k<j; k++) {
		weight_sum += a[k];
	}

	return weight_sum*p[i];
}
int minimize_money(int* a, int* p, int n) {
	
	int smallest_index = n;
	int sum = 0;
	while(smallest_index != -1) {
		int old_index = smallest_index;
		smallest_index = find_smallest(p, old_index);
		sum += find_sum(smallest_index, old_index, a, p); 
		// cout << smallest_index <<" " << sum << '\n';
 	}

	return sum;
}


int main() {

	int n;
	cin >> n;
	int a[n], p[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
		cin >> p[i];
	}

	int result = minimize_money(a, p, n);
	cout << result;
	return 0;
}








