// Wrong solution. I have to use some bit manipulation, to get
// the desired answer. Actually no!

#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int x;
	cin >> x;
	int i, ans;
	for(i=1;i<2*x;)
	{
		if (i == x)
		{
			ans = 1;
			break;
		}
		if (i*2 > x)
		{
			ans = 1 + x - i;
			break;
		}

		i *= 2;
	}

	cout << ans;
	return 0;
}
