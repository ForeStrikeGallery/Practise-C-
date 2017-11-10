/*
 
 Difficulty: Easy

Given an unsorted array of non-negative integers, find a continuous sub-  array which adds to a given number.

 Okaay, how do we do this?
 
 We can sort. That'll make things more structured and easier.
 We are given a value S, and we need to find the subarray who's sum
 is S. Now if it's sorted, and we look from the back, and say,

 the last element arr[N-1] > S, so we definitely know, ohh no we can't
 lose the value of the original indices. 

 My bad, we can't sort. 

 If I find the cumulative sum till index i, then?

 Oh I can do this. We'll have two iterators, start and end
 
 start = 0
 end = 0
 sum = 0

 for i = 0 through N-1:
 	end = i
	sum += arr[end]
	if sum == S:
		return start, end
	if sum < S:
		continue
	if sum > S:
		sum -= arr[start++]

 This works in O(N) time. Do we need it to be faster?
 
 Oh no, this isn't that simple. This is a dp problem?
 
 Nah, nah I have to keep subtracting from the back in case the sum is 
 too large 
 and so,
 
 if sum < S:
	sum += arr[++end]

 if sum > S:
	sum -= arr[start++]
	
 if sum == S:
	return (start, end)

 Yep! That should work!
  		
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int *findSubArrayWithGivenSum(int *arr, int size, int givenSum) {

	int start = 0;
	int end = 0;
	int sum = 0;

	for (int i=0; i<size; i++) {
		if (sum < givenSum) {
			sum += arr[end++];
			cout << i << " " << sum;		
		} else if (sum > givenSum) {
			sum -= arr[start++];
			cout << i << " " << sum;
		} else {
			int a[2] = {start, end};
			cout << start << " " << end;
			return a;
		}
				
	}
	int a[2] = {-1,-1};
	return a;
}


int main() {
	srand(time(0));
	int arr[] = {1, 2, 3, 7, 5};
	int S = 12;
	int *p;
	p = findSubArrayWithGivenSum(arr, 5, S);
	//cout << p;
	return 0;
}










