/*
 	LONGEST INCREASING SUBSEQUENCE

 Given a sequence, find the length of the longest increasing subsequence
 from a given sequence . 
 The longest increasing subsequence means to find a subsequence of a given 
 sequence in which the subsequence's elements are in sorted order, lowest
 to highest, and in which the subsequence is as long as possible. This  
 subsequence is not necessarily contiguous, or unique.



 So, I believe I've gone through the reasoning of something similar.
 The following is the naive recursive solution to the problem.

 -----------
 
 lis(arr, size, index, last_biggest):
 	if index == size:
		return 0
	if arr[index] > last_biggest:
		max = max(lis(arr, size, index+1, arr[last_biggest]),
			  arr[index]+lis(arr, size, index+1, arr[index]))
	return max

 -----------


 Now, this would take quite a bit of time, so we use memoization.
 

 ------------

 lis(arr, size, index, last_biggest):
	if index == size:
		return 0;

	if memo[index]:
		return memo[index]

 	if arr[index] > last_biggest:
		max = max(lis(arr, size, index+1, arr[last_biggest]),
			  arr[index]+lis(arr, size, index+1, arr[index]))
		memo[index] = max

	return max

 ------------


 There's also the bottom-up approach, where you mandatorily find and 
 store the value in memo before ever using it. 


 ----------

 lis(arr, size):
 
 	for (i=size-1; i>=0; i++):
		

 ---------

 Okay, I don't know how to do this one, I'll refer and come back.
 edit: It seems like my approach was wrong.

 __________________________________________________________________

 Solution from GeekForGeeks

 Theory on Dynamic Programming:

 Like divide and conquer, Dynamic Programming solves the problem by 
 combining solution to the subproblem. DP is only used when we have 
 subproblems that keep repeating itself. We bring down the number of
 computations by saving these values in the memory, and using it when
 required. Although this may sound quite lame and doesn't live up to 
 the name, you'll soon realise that DP works like magic. Programs with
 exponential time complexity will get turned into linear time. It's a
 good example of memory-time trade-off. 

 Of course, note that we need only use DP if there are overlapping 
 subproblems. 


 There are two ways of implementing DP. This is after you've figured
 out the recursive relationship in the problem. Which I must say, is 
 often times non-trivial. Anyway, here are the ways to implement the 
 storing of values in DP.

 1) Memoizatin (Top Down)
 2) Tabulation (Bottom Up)


 Memoization-
 
 Here we solve it recursively using the naive recursive solution with a
 slight twist. We'll add a lookup array where we place all precomputed
 values. We initialise it as NIL, and store the values of the subproblem
 the first time we compute it. Whenever we need to compute something, we 
 do the following:

 ---------

 if memo[subproblem] exists?
 	use memo[subproblem]
 else:
	compute subproblem
	save value of subproblem in memo

 -------
	
 The tricky part is to uniquely identify a subproblem and then save it
 and retrieve it whenever need it. For the most part, we use the indices
 of our arrays to do this for us. As you do more problems in DP, you'll 
 understand exactly what I meant by that.

 Where to define these memos is another task by itself, and we'll get
 to that soon. HINT: We may do it globally :P
 
 Tabulation-

 This is the method I'm less familiar with. It is cleaner and trickier. 
 It takes you away from the intuitiveness of the naive recursive method. 
 Usually what people do is solve the problem recursively and convert it
 into an iterative method with tabulation.

 Optimal Substructure:
 
 A given problems has Optimal Substructure Property if optimal solution of 
 the given problem can be obtained by using optimal solutions of its 
 subproblems. 


 Coming back to the problem at hand from where we were drifing off. 

 We need to first prove that it has both overlapping subproblems and 
 optimal subsructure to prove that it can be solved using DP.


 If arr[0..n-1] is the input array and L(i) is the length of the LIS
 ending at index i such that arr[i] is the last element of LIS

 Then, L(i) = 1 + max(L(j)) where 0 < j < i, and arr[j]<arr[i]; 

 This is wrong, j should be the first j such that 
 arr[j] < arr[i]
				

*/




















