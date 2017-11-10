#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int subArraySum(int arr[], int size, int sum) {
	int curr_sum = arr[0], start = 0, i;

	for (i=1; i<=size; i++) {
		while(curr_sum > sum && start < i-1) 
		{
			curr_sum = curr_sum - arr[start];
			start++;
		}

		if (curr_sum == sum) 
		{
			return 1;
		}

		if (i < n)
			curr_sum = curr_sum + arr[i];
	}
}

int main() {
	return 0;
}
