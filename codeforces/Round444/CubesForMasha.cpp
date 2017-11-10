#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> digit_count(10,0);

	int digit;

	for (int i=0; i<n*6;i++) {
			cin >> digit;
			cout << digit;
			digit_count[digit] += 1;

	}

	cout << "readin done";

	for (int i=0; i<digit_count.size(); i++)
		cout << digit_count[i];

	int max_num = 0;

	for (int i=1; ;i++) {
		vector<int> digits(10, 0);
		int index = i;
		while(i>0) {
			digit = i%10;
			digits[digit] += 1;
			i /= 10;
		}
		bool weDone = false;

		for (int j=1; j<digits.size(); j++) {
			if (digits[j] > digit_count[j]) {
				weDone = true;
				break;
			}
		}

		if (weDone)
			break;

		max_num = index;
	}

	cout << max_num;

	return 0;
}