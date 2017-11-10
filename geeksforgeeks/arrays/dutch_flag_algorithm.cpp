/*
 
	DUTCH NATIONAL FLAG ALGORITHM   

 So this algorithm was invented by Dijkstra, the computer science God.
 This is a solution to the 0,1,2 sort problem. It's inpired from the 
 partition function in quicksort. 


 For two elements, this is the algorithm:
 
 ------

 1. Lo := 1; Hi := N;
 2. while Lo <= Hi do:
	1. Invariant: a[0..Lo-1] are all zero 
                  and a[Hi+1..N-1] are all one
		      a[Lo..Hi] are unknown

        2. If a[Lo] = 0 then Lo++
	3. else swap(a[Lo], a[Hi--]);

  -----

  This makes sure that at any point, every element to the left 
  of Lo is 0 and right of Hi is 1.

  The following is the version of the algorithm for three distinct elements
  in the array

 ------
 
  1. Lo := 0; Mid := 0; Hi := N;
  2. while Mid <= Hi do:
	1. invariant: a[0..Lo-1] = 0
		      a[Lo..Mid-1] = 1
		      a[Hi+1..N-1] = 2
		      a[Mid...Hi] = unknown
	2. case a[Mid]:
		0: swap(a[low++], a[mid++])
		1: mid++
		2: swap(a[mid], a[high--])

 ------

 The given algorithm runs in O(N) time
  
*/


#include<iostream>
#include<cstdlib>

using namespace std;

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void dnf_two_colors(int arr[], int low, int high) {
	/*
	   low initialised as 0, and high as N-1
	*/
	while (low <= high) {
		if (arr[low] == 0) {
			low++;		
		} else {
			swap(&arr[low], &arr[high--]);		
		}
	}
}

void dnf_three_colors(int arr[], int low, int high, int mid) {
	/*
	   low := 0
	   high:= N-1
	   mid := 0
	*/

	while (mid <=high) {
		switch(arr[mid]) {
			case 0:
 				swap(&arr[low++], &arr[mid++]);
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(&arr[mid], &arr[high--]);
		}
	}

}

void printArray(int arr[], int size) {
	for(int i=0; i<size; i++)
		cout << arr[i]<< " ";
	cout << '\n';	
}

int main() {
	int toSort[] = {1,0,0,0,1,1,1,0, 2, 2, 1,0};
	
	int size = sizeof(toSort)/sizeof(toSort[0]);
	//dnf_two_colors(toSort, 0, size - 1);
	dnf_three_colors(toSort, 0, size - 1, 0);		
	printArray(toSort, size);	
	return 0;	
}


