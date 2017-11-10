/*
	HEAP INSERTION SORT

 This sorting algorithm is composed of a combination of max-heapify and 
 insertions sort. Max-heapify makes sure that the array is partially
 sorted so that insertion sort can solve it in near linear time. Max-
 heapify by itself runs in O(logN) time, which is less than O(N). So,
 this should be really fast :)

 (edit): If you ever find me dead in my room, know that it's certainly
         from trying to debug segmentation faults.

*/


#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


// Utility function to swap elements
void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void max_heapify(int arr[], int size, int index) {
	int l = 2*index;
	int r = 2*index + 1;
	int largest = index;

	 
	if (l < size) 
		if (arr[l] > arr[index])
			largest = l;
	if (r < size)  
		if (arr[r] > arr[largest])
			largest = r;
	if (largest != index) { 
		swap(&arr[index], &arr[largest]);
		max_heapify(arr, size, largest);
	}
}

void insertionSort(int arr[], int size) {
	
	
	for (int i=size-1; i>0;i--) {
		int j = i-1;		
		int key = arr[i];
		while((j>=0) && (arr[j]<key)) {
			arr[j+1] = arr[j];
			j--;		
		}
		arr[j+1] = key;
	}
	

}

void heapInsertionSort(int arr[], int size) {

	for (int i=size/2; i>=0; i--) { // O(N)
		max_heapify(arr, size, 1); // O(logN)
	}
	
	insertionSort(arr, size); // O(N^2)

}
void printArray(int arr[], int size) {
	int i;
	for(i=0;i<size;i++)
		cout << arr[i] << " ";
	cout << '\n';
}

int main() {
	srand(time(0));
	int size = 1000000;
	int arr[size];
	for(int i=0; i<size;i++) {
		arr[i] = rand()%100;
	}
	const clock_t begin_time = clock();
	insertionSort(arr, size);
	
	printArray(arr, size);
	cout << float( clock() - begin_time )/CLOCKS_PER_SEC;
	return 0;	

}
