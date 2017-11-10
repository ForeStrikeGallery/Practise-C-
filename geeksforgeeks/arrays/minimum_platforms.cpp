/*
	Given arrival and departure times of all trains that reach a railway
 station, find the minimum number of platforms required for the railway 
 station so that no train waits.

 Every train can be expressed as an ordered pair of the form
 T = {(x,y) | x is arrival time, y is departure time, x < y }

 We have a collections of Ts. If we sort them according to the arival 
 Alternatively we can view it as (x, y-x)
 
 If we sort it x1 < x2 < x3 < ..  < xn


 ---------

 Sort according to first element. | N*logN
 
 for (i=0 -> N-2):
	for (j = i+1 -> N-1)
		if does_overlap(arr[i], arr[j]):
			overlaps[i] += 1;
			overlaps[j] += 1;

 return max_from_arr(overlaps);

 ---------

*/


#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool does_overlap(int *a, int *d, int i, int j) {
	if (d[i] < a[j])
		return true;
}

int max_from_arr(int *a, int N) {
	int largest = INT_MIN;
	for(int i=0; i<N; i++){
		if(a[i] > largest) {
			largest = a[i];		
		}
	}
	return largest;
}

void print_arr(int *a, int N) {
	for (int i=0; i<N; i++)
		cout << a[i] << " ";
}
int main(){
	int T;
	cin >> T;
	while(T--) {
	
		int N;
		cin >> N;
		int a[N], d[N], overlaps[N];
		for (int i=0; i<N; i++) {
			cin >> a[i];
			overlaps[i] = 0; 
		}// initialising with 0
		for (int i=0; i<N; i++)
			cin >> d[i];
		


		for (int i=0; i<N-1; i++) {
			for (int j =i+1; j<N; j++) {
				if (does_overlap(a, d, i, j)){
					overlaps[i] += 1;
					overlaps[j] += 1;			
				} else {
					break; // (x,y) not overlap for y > x => (x,z) not overlap for z > y
				}
			}
		}	

		int num_platform = max_from_arr(overlaps, N);	
		cout << num_platform;
		print_arr(overlaps, N);		
	}
	return 0;
}





