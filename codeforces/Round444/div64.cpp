#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int num_zeroes = 0;

	int last_index;
	for (int i=s.size()-1; i>0; i--) {
		if (s[i] == '0'){
			num_zeroes +=1;
			last_index = i;
		}

		if (num_zeroes == 6)
			break;
	}


	if (num_zeroes < 6){
		cout << "no";
		return 0;
	}	

	bool oneMore = false;

	for (int i=0; i<last_index; i++) {
		if (s[i] == '1')
			oneMore = true;
	}

	if (num_zeroes==6 && oneMore)
		cout << "yes";

	return 0;
	
}