#include<iostream>
#include<cstdlib>
using namespace std;


int main() {
	int matrix[5][5];
	int i1,j1;

	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			int a;
			cin >> a;
			matrix[i][j] = a;
			if (a == 1) {
				i1 = i;
				j1 = j;

			} 
						
		}

			
	}

	int ans = abs(i1-2) + abs(j1-2);
	cout << ans;
	return 0;
}

