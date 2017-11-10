/*
	This is an implementation of Kadane's algorithm for
	the maximum sum subarray problem
*/


#include<iostream>
#include<vector>
#include<climits>

using namespace std;


int kadanes_algorithm(int *arr, int N) {
	int max_so_far = INT_MIN;
	int max_ending_here = 0;

	for (int i=0 ; i< N; i++) {
		max_ending_here = max_ending_here + arr[i];

		if(max_ending_here < 0)
			max_ending_here = 0;
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;
	}

	return max_so_far;
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		int arr[N];
		for (int i=0; i< N; i++) {
			cin >> arr[i];			
		}

		int max_sub_sum = kadanes_algorithm(arr, N);
		cout << max_sub_sum;
	}
	return 0;
}
