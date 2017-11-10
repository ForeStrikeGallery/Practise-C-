/*

 Write a program to sort an array of 0's,1's and 2's in ascending order.

 Hmm, we know the number of distint elements, and should use that
 somewhere. Furthermore, they are consecutive numbers. 
 
 Even if it finishes in O(N), it's a shame.
 Dirty trick, take counts of 0s,1s and 2s. And build another array :P

 But of course, that's not sorting in the real definition of sorting.

 I can have two iterators, and keep swapping the left most element
 to be zero. Borrowing ideas from the partition function in quicksort. 

 Recursively call the function on the subarray which excludes all the 
 zeros and do the same algorithm for 1

 My implementation

*/


#include<iostream>
#include<cstdlib>

using namespace std;
void swap(int *a, int *b) {

	int t = *a;
	*a = *b;
	*b = t;
}

void sort012 (int arr[], int low, int high, int smallest) {
	if (low >= high) 
		return; 
	if (smallest == 2) 
		return; 
	
	int left_index = low;
	for (int i=low; i<high; i++) {
		if (arr[left_index] == 0)
			left_index++;
		
		else if (arr[i] == 0)
			swap(&arr[i], &arr[left_index]);

 		if (i == high -1)
			sort012(arr, left_index, high, smallest+1);
	}
}

int main() {
	int T;
	cin >> T;

	while(T--) {
		int N;
		cin >> N;
		int arr[N];
		for (int i=0; i< N; i++) 
			cin >> arr[i];
		sort012(arr, 0, N, 0);	
	}

}












