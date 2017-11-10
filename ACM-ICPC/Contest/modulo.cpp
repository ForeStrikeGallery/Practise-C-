#include<bits/stdc++.h>

using namespace std;





int main() {
	int T;
	cin >>T;

	while(T--) {


		int N;
		vector<long long int> A;
		vector<long long int> B;	
		cin >> N;

		long long int R;
		for (int i=0; i<N; i++) {
			cin >> R;
			A.push_back(R);
		}

		for (int i=0; i<N; i++) {
			cin >> R;
			B.push_back(R);
		}

		int min_b = INT_MAX;


		for (int i=0; i<N; i++) {
			if (min_b > B[i]) {
				min_b = B[i]; 
			}
		}

		vector<int> map(min_b+1, 0);

		for (int i=0; i<N; i++) {
			for (int j=0; j<B[i]; ) {


				int val = A[i]%B[i];

				if (val >= min_b) {
					j += B[i] - val;
					A[i] += B[i] - val;
					continue;
				}

				A[i] += 1;
				map[val] += j;

				j++;
			}
		}

		int min_tot = INT_MAX;

		for (int i=0; i<min_b; i++) {
		 	if (min_tot > map[i]) {
		 		min_tot = map[i];		
		 	}
		}


		cout << min_tot << "\n";
	}


	return 0;
}