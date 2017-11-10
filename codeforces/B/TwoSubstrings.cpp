#include<bits/stdc++.h>

using namespace std;

int main() {

	string s;
	cin >> s;
	int x = s.find("AB");
	int x_1 = s.find("BA", x+2);
	int y = s.find("BA");
	int y_1 = s.find("AB", y+2);

	if ((x != -1 && x_1 != -1) || (y != -1 && y_1 != -1)) printf("YES");
	else printf("NO");
}