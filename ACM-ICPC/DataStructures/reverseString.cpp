#include<bits/stdc++.h>

using namespace std;


int main() {
	
	vector<string> words;
	string sentence;

	while(getline(cin, sentence)) {
		int start = -1;
  
		for(int i=0; i<sentence.size(); i++) {
			if (sentence[i] == ' ') {
				for (int j=i-1; j>start; j--)
					cout << sentence[j];
				printf(" ");
				start = i;
			}
		}
		printf("\n");
	}

	// This wont' stop, So start printing as soon as you can. 
	return 0;
}