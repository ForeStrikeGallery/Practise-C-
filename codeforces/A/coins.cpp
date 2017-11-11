#include<iostream>
using namespace std;

void sort(int *arr, int N) {
	for (int i=1; i<N; i++) {
		int key = arr[i];
		int j = i-1;
		while(j>=0 && arr[j] <key ) {
			arr[j +1] = arr[j];
			j--;
 		}

 		arr[j+1] = key;
	}
}

int minNumNeeded(int *arr, int N) {
	int sum = 0;
	for (int i=0; i< N; i++) {
		sum += arr[i];
	}

	sort(arr, N); 
	int new_sum = 0;
	int twin_sum = sum;
	int i=0;


	while(new_sum <= twin_sum) {
		new_sum += arr[i];
		twin_sum -= arr[i];
		i++;
	}


	return i;
}
int main() {
	int N;
	cin >> N;
	int arr[N];
	for(int i=0; i<N; i++) 
		cin >> arr[i];
	//sort(arr, N);
	//for (int i=0; i<N; i++)
	//	cout << arr[i] << " ";
	cout << minNumNeeded(arr , N);
	return 0;
}