#include<bits/stdc++.h>

using namespace std;

int main() {
	string s1;
	string s2;

	cin >> s1 >> s2;
	for (int i=0; i<s1.length(); i++) {
		int a = tolower(s1[i]);
		int b = tolower(s2[i]);

		if (a < b) {
			printf("-1");
			return 0;
		} else if (a > b) {
			printf("1");
			return 0;
		}
	}
	printf("0");
	return 0;
}