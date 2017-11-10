
/*
	In this problem a recursive solution is possible. Since it takes too long
	I saved all the intermediary results. Like how it is done in DP problems.
	However I used a map instead of a linear array since array would take 
	too much space.

	You can do a key look up in map in O(logN) time.
	Hope that suffices.

	Edit: That was not enough. I probably have to use a super large array.

*/


#include<iostream>
#include<vector>
#include<stdio.h>
#include<map>

using namespace std;

bool isOdd(int n){
	if (n%2 == 0)
		return false;
	return true;
}
int find_cycle_length(int a, int *table) {
	//cout << a << " ";
	if ( a == 1)
		return 1;
	if (table[a] != 0 )
		return table[a];
	int val;

	if (isOdd(a)) {
		val =  1 + find_cycle_length(3*a + 1, table);
	} else {
		val =  1 + find_cycle_length(a/2, table);
	}

	table[a] = val;
	return val;

}


int main() {
	//map<int, int> cycle_lengths; // memoization for faster execution
	int cycle_lengths[2000000] = {0};
	int n, i, j;
	while(true) {
		int max_val = -1;
		int i, j;
		cin >> i >> j;
		for (int k=i; k<=j; k++) {
			int cycle_len = find_cycle_length(k, cycle_lengths);
			max_val = max(cycle_len, max_val);
		}
		//cout << i << " " << j << " " << max_val;
		printf ("%d %d %d\n", i, j, max_val);
	}

	return 0;
}

