#include<iostream>
using namespace std;

int main() {
	int a, b, r;
	while(true) {
	cin >> a >> b;
	r = a & b;
	cout << r << " ";
	r = a | b;
	cout << r << " ";
	r = a ^ b;
	cout << r << " ";
	}
	return 0;
}
