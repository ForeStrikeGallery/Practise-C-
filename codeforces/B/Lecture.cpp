#include<bits/stdc++.h>

using namespace std;

int main() {
	map<string, string> st_map;
	int n,m;
	cin >> n >> m;
	while(m--) {
		string a, b;
		cin >> a >> b;
		st_map[a] = a.length() <= b.length()?a:b;
	}

	while(n--) {
		string a;
		cin >> a;
		cout << st_map[a] << " ";
	}
}