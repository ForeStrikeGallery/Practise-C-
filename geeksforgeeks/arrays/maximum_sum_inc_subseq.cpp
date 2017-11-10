/*

	MAXIMUM SUM INCREASING SUBSEQUENCE

 Given an array of n positive integers. Write a program to find te 
 sum of maximum sub subsequence of the given array such that the intgers
 in the subsequence are sorted in increasing order. 

 I faintly remember this to be a dp problem. Is it?

 So, when an element appears which is a candidate eligible to be 
 added to my sum that I wish to maximize. I may choose to either pick
 it or not pick it. The reason I wouldn't want to pick it even though
 it adds to my sum is because, there could be other elements, which 
 will get disqualified as a candidate as a result of picking this element

 Mathematically, 

 If A[j] > A[j-1]
 I may not choose A[j], since there could be other elements
 of index k > j, and A[j-1] < A[k], A[m], A[n].. < A[j], and 
 where A[k] + A[m] + A[n].. > A[j]

 The only way to check if I need to pick A[j] in this case, would be to
 check for both cases. We can hence write a recursive function to do
 the same.

 -----
 findMaxSum(A, highest_index, curr_index):
	
	if curr_index == N-1:
		return 0;
	if A[curr_index] < A[highest_index]:
		findMaxSum(A, highest_index, curr_index+1)
	else:
		return max( findMaxSum(A, highest_index, curr_index+1),
	 A[curr_index] + findMaxSum(A, curr_index, curr_index+1))	
    
 ----

 This is the recursive solution, but I don't have so much faith in its
 running time. T(n) = 2T(n-1) + O(1)
 
 T(n) = O(2^n) - We obviously can't afford that. 

 I'll read up dynamic programming and come back and finish this. 
 
*/
