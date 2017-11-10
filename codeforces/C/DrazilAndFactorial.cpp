#include<bits/stdc++.h>

using namespace std;


int main() {
	string s, map[] = {"", "", "2", "3", "322", "5", "53","7","7222","7332"};	
	long long a;
	cin >> a >> a; // matharchod
	while(a)s+=map[a%10], a/= 10;
	sort(s.rbegin(), s.rend());
	cout << s;


}
