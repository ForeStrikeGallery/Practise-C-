#include<bits/stdc++.h>

using namespace std;



int main() {
	int T;
	cin >> T;

	while(T--) {
		int N, K;
		cin >> N >> K;
		float exp = 2;

		for (int i=0; i<N-1; i++) {
			exp = (exp + 2) - 2.0/K;
		}
		cout << exp <<endl;
	}

	return 0;
}