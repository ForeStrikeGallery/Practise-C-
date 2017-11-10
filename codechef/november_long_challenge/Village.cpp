#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		string villages;
		cin >> villages;
		map<char, int> owns;
		owns['A'] = 0;
		owns['B'] = 0;
		int last;
		char currentVil = '.';

		for (int i=0; i<villages.size(); i++) {
			if (villages[i] != '.') {
				if (currentVil != villages[i]) {
					currentVil = villages[i];
					owns[currentVil] += 1;
				} else {
					owns[currentVil] += (i - last); // will not happen before last is initialised 
				}

				last = i;
			} 
		}

		cout << owns['A'] << " " << owns['B'] << endl;
	} 
}