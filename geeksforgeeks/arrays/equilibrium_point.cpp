/*
	EQUILIBRIUM POINT

 Given an array A your task is to tell at which position the equilibrium  first occurs in the array. Equilibrium position in an array is a position such that the sum of elements below it is equal to the sum of elements after it.

 I immediately think of cumulative sum. I also realise that I can't 
 change the positions of elements => I can't sort. 

 It intuitively looks like it can be done in O(N), but anything smaller
 would be pretty hard, if not plain impossible. 

 Eh, this is easy.

 Find total sum, for every element, check if cumulative sum till
 i-1 is equal to total_sum - a[i]. Peace of cake.

*/

#include<iostream>
using namespace std;

int doesEquilibriumExist(int *arr, int size) {
	int cum_sum[size];
	int max_sum = 0;
	int total_sum = 0;

	for (int i=0; i<size; i++) {
		total_sum += arr[i];
		cum_sum[i] = arr[i] + max_sum;
		max_sum = cum_sum[i];
	}

	for (int i=1; i<size; i++) {
		if (cum_sum[i-1] == total_sum - arr[i])
			return 1;
	}
	return -1;	
}

int main() {
	int arr[] = {1,3,5,2,2};
	cout << doesEquilibriumExist(arr, 5);
	return 0;
}




