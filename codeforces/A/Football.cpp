#include<bits/stdc++.h>

using namespace std;

char digits[] = {'0', '1'};


int main() {

	string s; 
	cin >> s;
	
	size_t found1 = s.find("1111111");
	size_t found2 = s.find("0000000");

	if ((found1 != string::npos) || (found2 != string::npos))
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}