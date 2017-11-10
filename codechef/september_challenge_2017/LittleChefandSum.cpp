#include<iostream>
#include<climits>

using namespace std;

int prefixSum(int *arr, int N, int j) {
	int sum = 0;
	for(int i=0; i<=j-1; i++)
		sum += arr[i];
	return sum;
}

int suffixSum(int *arr, int N, int j) {
	int sum = 0;
	for(int i=N-1; i>=j-1; i--)
		sum += arr[i];
	return sum; 
}

int main() {

	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		long long int arr[N];
		long long int cum_sum[N+1];
		cum_sum[0] = 0;
		for(int i=0; i<N; i++) {
			cin >> arr[i];
			cum_sum[i+1] = cum_sum[i] + arr[i];
		}

		long long int total_sum = cum_sum[N];

		int min_sum = INT_MAX;
		int min_index = -1;

		for(int i=1; i<=N; i++) {
			//int prefix = prefixSum(arr, N, i);
			//int suffix = suffixSum(arr, N, i);
			long long int prefix = cum_sum[i];
			long long int suffix = total_sum - cum_sum[i-1];
			
			long long int sum = prefix + suffix;
			//cout << prefix << " " << suffix << "\n"; 
			if (sum < min_sum) {
				min_sum = sum;
				min_index = i;
			}
		}

		cout << min_index << endl;
		}

	return 0;
}