#include<bits/stdc++.h>
using namespace std;


string next_permutation(string s) {

	int max_val = 0;
	int max_index = 0;

	int index = -1;
	for (int i=s.size()-1; i>0; i--) {
		if (s[i]>s[i-1]) {
			index = i-1;
			break;
		}
	}

//	cout << index;
	if (index == -1)
		return "No Successor";

	max_val = s[index+1];
	max_index = index + 1;

	for (int i=index; i<s.size(); i++) {
		if (s[i] > s[index]) {
			if (s[i] < max_val)
				max_index = i;
				max_val = s[i];
		}
	}

	char temp = s[index];
	s[index] = s[max_index];
	s[max_index] = temp;

//	cout << max_index;
	sort(s.begin() + index +1, s.end());
	return s;
}

int main() {

	string line;
	while( getline(cin, line) ) {
		if (line == "#") {
			//printf("\n");
			return 0;
		}
		cout << next_permutation(line) << endl;
	}
}