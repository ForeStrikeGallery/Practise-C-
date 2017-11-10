#include<bits/stdc++.h>
using namespace std;

int main() {

	int T;
	cin >> T;
	while(T--) {
		int N, R, val;
		cin >> N >> R;
		vector<int> ratings;
		for(int i=0; i<N; i++) {
			cin >> val;
			ratings.push_back(val);
		}

		int min_upper = INT_MAX;
		int max_lower = INT_MIN;

		bool yes = true;

		for (int i=0; i<N-1; i++) {
			if (ratings[i] > R) {
				if (min_upper > ratings[i]) {
					min_upper = ratings[i];
				} else {
					cout << "NO" <<endl;
					yes = false;
					break;
				}
			} else { 
				if (max_lower < ratings[i]) {
					max_lower = ratings[i];
				} else {
					cout << "NO" <<endl;
					yes = false;
					break;
				}

			}
		}

		
		if (yes)
			cout << "YES" << endl;	
	}
}