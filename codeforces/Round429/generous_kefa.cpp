#include<iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	char arr[n];
	int count[n];

	for (int i=0; i<n; i++) {
		cin >> arr[i];
		count[i] = 0;
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (arr[j] == arr[i])
				count[i] += 1;
		}
	}

	int max=-1;
	for(int i=0; i<n; i++)
		max = count[i] > max? count[i]:max;

	if (max > k)
		cout << "No";
	else
		cout << "Yes";
	return 0;
}

