/*
	Zeroes and Ones

 

*/

#include<iostream>
using namespace std;

bool isPair(char a, char b) {
	if (a == b)
		return false;
	return true;
}

int main() {
	int N;
	cin >> N;
	char arr[N];
	for (int i=0; i<N; i++)
		cin >> arr[i];
		cout << "\n";
	cout << "Reached Here!";	
	int size = N;
	
	while(true) {
		bool pair_found = false;
		for (int i=0; i<size-1; i++) {		
			if (isPair(arr[i], arr[i+1])) {
				pair_found = true;
				for (int j = i; j< size-2; j++) {
					arr[j] = arr[j+2];
				}	
				size -= 2;
			}

		if (pair_found == false)
			break;
		}
	}
	cout << size;
	return 0;
	
}









