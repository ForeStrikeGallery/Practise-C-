#include<bits/stdc++.h>

using namespace std;

int main() {

	int t;
	string line;

	cin >> t;
	getchar(); // reads blank line

	while(t--) {
		getchar(); // reads space again

		vector<int> numbers;
		
		string line;
		getline(cin, line);

		stringstream sin;
		sin << line; // it's in the string stream.
		int val; 
		while(sin >> val) {
			numbers.push_back(val);
		}

		vector<string> permuted(numbers.size()+1, "0");
		getline(cin, line);
		sin.clear(); // clears the stream, perhaps
		sin << line; 

		string num; 
		int i=0;
		while(sin >> num ) {
			permuted[numbers[i]] = num;
			i++;
		}

		for(int i=1; i<permuted.size(); i++) {
			cout << permuted[i] << "\n";
		}

		if(t)
			puts(""); // Line seperation
	}
}