#include<iostream>
#include<cmath>

using namespace std;

float find_distance(int x1, int y1, int x2, int y2) {

	float distance = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	return distance;
} 


int main() {
	int r, d;
	cin >> r >> d;
	int inner_radius = r - d;
	int n;
	int count = 0;
	cin >> n;
	while(n--) {
		int x, y, r1;
		cin >> x >> y >> r1;
		float distance = find_distance(0, 0, x, y);
		if (((distance - r1) >= (r - d)) && ((distance + r1) <= r)) {
			count += 1;
		}
 	}
	cout << count;
	return 0;
}