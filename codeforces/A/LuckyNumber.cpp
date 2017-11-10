/*

	Floating point exception happens when there's a division by zero
	Try to avoid doing it. Meaning be careful.
*/

#include<iostream>
using namespace std;

bool is_lucky(int n) {
	//cout << "This works!";
	while(n > 0) {
		int last_digit = n%10;
		if ((last_digit != 4) && (last_digit != 7)) {
			//cout << last_digit;
			return false;
		}
		n /= 10;
	}

	return true;
}



int main() {

	int n;
	cin >> n;
	for(int i=1; i<n + 1; i++) {
		if (n%i == 0){
			if (is_lucky(i)) {
				cout << "YES";
				return 0;
			}
		}
	}

	cout << "NO";
	return 0;
}