#include<iostream>

using namespace std;

void rotate_array_by_one(int *arr, int N) {
	int temp = arr[0];
	for(int i=0; i<N-1; i++) {
		arr[i] = arr[i+1];
	}
	arr[N-1] = temp;
}

void rotate_array(int *a, int N, int d) {
	for (int i=0; i<d; i++) {
		rotate_array_by_one(a, N);
	}
}


void print_array(int *a, int N) {
	for(int i=0; i<N; i++)
		cout << a[i] << " ";
	cout << "\n";
}

int get_pivot_element(int *arr, int N) {
	for (int i=0; i<N; i++) {
		if (arr[i] > arr[i+1])
			return i;
	}

	return -1;

}

void insertion_sort(int *arr, int N) {
	for (int i=1; i<N; i++) {
		int key = arr[i];
		int j = i - 1;
		while(j >=0 && arr[j] > key) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

// Important function
bool pairInSortedArray(int arr[], int n, int x) {
	int i;
	int max = get_pivot_element(arr, n);
	int min = (max + 1)%n; // Index of lowes using modular arithmetics.

	while (max != min) {
		if (arr[min] + arr[max] ==  x)
			return true;
		if (arr[min] + arr[max] < x)
			min = (min+1)%n;
		else
			max = ( max - 1 + n) %n ;
	}
} 

int main() {
	
	return 0;
}
