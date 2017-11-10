#include<iostream>
#include<vector>


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

int binary_search(int *arr, int low, int high, int key) {
	int mid = (low + high)/2;
	if (arr[mid] == key)
		return mid;

	if (low < high) {
		if (arr[key] > arr[mid])
			return binary_search(arr, mid+1, high, key);
		else 
			return binary_search(arr, low, mid-1, key);
	}

	return -1;
}

int get_pivot_element(int *arr, int N) {
	for (int i=0; i<N; i++) {
		if (arr[i] > arr[i+1])
			return i+1;
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

int search_sorted_rotated_array(int *arr, int N, int val) {
	int pivot = get_pivot_element(arr, N);
	cout << "pivot " << pivot; 
	int index = binary_search(arr, 0, pivot-1, val);
	if (index != -1)
		return index;
	index = binary_search(arr, pivot, N-1, val);
	return index;
}

int main() {
	int arr[] = {1, 3,2 ,4,52, 2};
	int size = sizeof(arr)/sizeof(arr[0]);
	print_array(arr, size);
	insertion_sort(arr, size);
	rotate_array(arr, size, 3);
	print_array(arr, size);
	int val; 
	cin >> val;
	int index = search_sorted_rotated_array(arr, size, val);
	cout << index;
	return 0;
	
}
