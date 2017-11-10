#include<bits/stdc++.h>


using namespace std;

int main() {

	string phrase;
	string str1 = "``";
	string str2 = "''";

	bool first_comma = true;
	while(getline(cin, phrase)) { // Stops at EOF?

		for (int i=0; i<phrase.length(); i++) {
			if (phrase[i] == '"') { // Its a char, so '' will do
				if (first_comma) {
					phrase.erase(i, 1); // erase 1 elem at position i	
					phrase.insert(i, str1); // insert str1 at position starting at i
					first_comma = false;
				} else {
					phrase.erase(i, 1);
					phrase.insert(i, str2);
					first_comma = true;
				}
			} 

		}

		cout << phrase << "\n";
	} 

}