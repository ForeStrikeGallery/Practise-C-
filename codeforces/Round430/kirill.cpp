#include<iostream>
using namespace std;

bool does_k_exist_b(int x, int y, int i, float k) {

	if (x > y)
		return false;

	int mid_here = x + (y -x)/2;
	float ratio = float(i)/mid_here;
	
	if (ratio == k)
		return true;
	if (k < ratio) {
		return does_k_exist_b(x, mid_here-1, i, k);
	} else {
		return does_k_exist_b(mid_here+1, y, i, k);
	}
	return false;
}

bool does_k_exist_a(int l, int r, int x, int y, float k) {
	for(int i=l; i<=r; i++) {
		if(does_k_exist_b(x, y, i, k)) {
			return true;
		} 
	}

	return  false;
}

int main() {
	int l, r, x, y;
	float k;
	cin >> l >> r >> x >> y >> k;
	if (does_k_exist_a(l,r,x,y,k)) {
		cout << "YES";
		return 0;
	}
	cout << "NO";
	return 0;
}
