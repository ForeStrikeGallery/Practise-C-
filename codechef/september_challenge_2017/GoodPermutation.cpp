#include<iostream>
using namespace std;

void rotate_subarray(int *arr, int beg, int end) {
	int temp = arr[beg];
	for(int i=beg; i<end; i++) {
		arr[i] = arr[i+1];
	}
	arr[end] = temp;

}

void print_array(int *arr, int N) {

	for (int i=0; i<N; i++) {
		cout << arr[i] << " ";
}
cout << endl;
}

int main() {
	int T;
	cin>>T;
	while(T--) {
		int N;
		cin >>N;
		int arr[N];
		
		for(int i=1; i<=N; i++) {
			arr[i-1] = i;
		}

		//print_array(arr, N);
	
		if (N%2 == 0 ) {
			for(int i=0; i<N-1; i+=2) {
				rotate_subarray(arr, i, i+1);
				//print_array(arr, N);			
			}
		} else {
			for(int i=0; i<N-3; i += 2) {
				rotate_subarray(arr, i, i+1);
				//print_array(arr, N);
			}
		

		 
			rotate_subarray(arr, N-3, N-1);
		}
		print_array(arr, N);
	}
}
