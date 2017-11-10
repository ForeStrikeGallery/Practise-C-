#include<iostream>
using namespace std;


int min2(int a, int b)
{
	return a<b?a:b;
}

int min3(int a, int b, int c)
{
	return min2(min2(a, b), c);
}

int main() {
	int a,b,c;
	cin >> a >> b >>c;
	cout << min2(2*min3(a+b, b+c, c+a), a+b+c);
	return 0;
}
