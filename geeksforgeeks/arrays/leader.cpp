/*

 Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. The rightmost element is always a leader.

I imagine this to be rather simple. 

--------

max_till_now = a[N-1]

leader_list = []

for i = N-2 -> 0:
	if a[i] > max_till_now:
		leader_list.push(a[i)] 
		max_till_now = a[i]

--------

That should be it?
 

*/

#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		int arr[N];
		for (int i=0; i<N; i++)
			cin >> arr[i];

		//The algorithm
		vector<int> leader_list;
		int max_till_now = INT_MIN;

		for(int i=N-1; i>=0; i--) {
			if (max_till_now < arr[i]) {
				max_till_now = arr[i];
				leader_list.push_back(arr[i]);
			}		
		}

		//printing

		for(vector<int>::iterator it=leader_list.end()-1; it != leader_list.begin()-1; --it) {
			cout << *it<< " ";
		}
	}

	
	
	return 0;
}









