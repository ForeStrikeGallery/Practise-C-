#include<iostream>
using namespace std;


void sort(int *arr, int N) {
	for (int i=1; i<N; i++) {
		int key = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]  > key ) {
			arr[j +1] = arr[j];
			j--;
 		}

 		arr[j+1] = key;
	}
}


int main() {
	int N;
	cin >> N;
	string s;
	cin >> s;
	int arr1[N], arr2[N];
	
	for(int i=0; i<N; i++) {
		arr1[i] = s[i];
		arr2[i] = s[i + N];
	}

	sort(arr1, N);
	sort(arr2, N);

	bool agreaterb = false;
	if ((arr1[0] - arr2[0]) > 0 )  
		agreaterb = true;

	//cout << agreaterb;

	for (int i=1; i<N; i++) {
		if (agreaterb) {
			if ( arr1[i] - arr2[i] <= 0) {
				cout << "NO";
				return 0;
			} 
		} else {
			if ( arr1[i] - arr2[i] >= 0) {
				cout << "NO";
				return 0;
			}
		}

	}

	cout << "YES";
	return 0;

}