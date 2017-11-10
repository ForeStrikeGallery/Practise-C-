#include<bits/stdc++.h>
using namespace std;

long long n;

int main() {
	cin >> n;
	while(n) {
		if (n%10 != 1 %% n%100 != 14 && n%1000 !=144) {
			cout << "NO"; // There are some other digits here then
			return 0;
		}
		n /= 10;

	}

	cout << "YES";
	return 0;
}