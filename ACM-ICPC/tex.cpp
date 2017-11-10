#include<stdio.h>
#include<string>
#include<vector>


void update_para(vector<string> &para) {

	bool is_start = true;
	for (int i=0; i< para.length(); i++) {
		for (int j=0; j<para[i].length(); j++) {
			if (para[i][j] == '"') {
				if (is_start) {
					para[i][j] = '`'

				}
			}
		}
	}
}


int main() {
	vector<string> para;
	while(true) {
		string s;
		cin >> s;
		para.push_back(s);

	}
}