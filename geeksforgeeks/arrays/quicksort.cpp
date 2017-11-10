/*
	Given an array of size n-1 and given that there are numbers from 1 to n with one missing, the missing number is to be found.

 So, the brute force method will be to look for each of the numbers 1 
 through n and return the missing value. 

 This would take nlog(n) time (quicksort plus binary search)
 Well, actually you don't need to do bsearch, since we know all the 
 elements that are to be found, and they're conveniently consecutive
 natural numbers, we need only do

 a = quick_sort(a)
 for i = 1 through n:
     check i = a[i-1]
     else return i 

 For this method however, we need to implement quicksort as well
 	
*/



/*
	Make sure that all the leftmost elements are smaller than pivot.
	To do that carefully increment the index which keeps track of the
	leftmost elements. Whenever in the main iteration(j), if you find
	an element which is lesser than pivot, don't hesitate, but swap
	the damn thing to the the one with index i.

	This is pretty amazing. Since we are recursively calling it, 
	it'll eventually sort the whole array. Only apprehensions I have
	are for the edge cases. But have no worries, everything is taken
	care of.
*/


#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

// Utility function to swap elements
void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}



int partition(int *arr, int low, int high) {
	int pivot = arr[high];  
	int i = (low-1) ;
	for (int j = low; j <= high-1; j++) {
		if (arr[j] <= pivot) {
			i++; // increment index of smaller elements
			swap(&arr[i], &arr[j]);
		}
	}

	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

// recursive quicksort
void quickSort(int *arr, int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi-1);
		quickSort(arr, pi + 1, high);
	}

}





void printArray(int arr[], int size) {
	int i;
	for(i=0;i<size;i++)
		cout << arr[i] << " ";
	cout << '\n';
}

int main() {
	srand(time(0));
	cout << rand();
	int size = 10000000000;
	int arr[size];
	for(int i=0; i<size; i++) {
		arr[i] = rand()%100;
	}

	printArray(arr, size);
	cout << "quicksorting...\n";
	const clock_t begin_time = clock();
	quickSort(arr, 0, size-1);
	cout << float( clock() - begin_time ) / CLOCKS_PER_SEC;
	//printArray(arr, size);
}












