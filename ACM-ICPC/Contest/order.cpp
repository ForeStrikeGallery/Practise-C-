#include<bits/stdc++.h>

using namespace std;


int compare(int* a, int* b) {

	int sub[3];
	int flag = 0;	
	int sign = 0;
	for (int i=0; i<3; i++) {
		sub[i]= a[i]-b[i];
		if (sub[i]!= 0)
			flag = 1;
		
	}


	if (!flag) 
		return 0;

	bool isPositive = false;
	bool first = true;

	for (int i=0; i<3; i++) {
		if (sub[i] != 0) {
			if (first) {
				isPositive = sub[i]>0;
				first = false;
			}

			if (isPositive != sub[i]>0)
				return 0;
		}
	}

	if (isPositive)
		return 1;
	return -1;

}
int main() {
	int T, a[3], b[3], c[3];
	cin >> T;
	while(T--) {

		for (int i=0;i<3; i++)
			cin>>a[i];

		for (int i=0;i<3; i++)
			cin>>b[i];

		for (int i=0;i<3; i++)
			cin>>c[i];

		int resab = compare(a, b);
		if (resab == 0) {
			cout << "no\n";
			continue;
		}

		if (resab == 1) {

			int resac = compare(a, c);

			if (resac == 0) {
				cout << "no\n";
				continue;
			}


			if (resac == 1) {
				int resbc = compare(b,c);
				if (resbc == 0) {
					cout << "no\n";
					continue;
				} else {
					cout << "yes\n";
				}
			} else {
				cout << "yes\n";
			}
		} else {

			int resbc = compare(b, c);

			if (resbc == 0) {
				cout << "no\n";
				continue;
			}


			if (resbc == 1) {
				int resac = compare(a,c);
				if (resac == 0) {
					cout << "no\n";
					continue;
				} else {
					cout << "yes\n";
				}
			} else {
				cout << "yes\n";
			}			


		}



	}
	return 0;
}