#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	vector<int> da_table(101, 0);
	cin >> n >> k;

	while(n--) {
		string s;
		cin >> s;
		da_table[s.length()]++;
	}

	string pass;
	cin >> pass;
	int total_time = 0;
	for (int i=0; i<pass.length(); i++) {
		total_time += da_table[i];
	}

	//total_time += (total_time/k)*5;
	int best_time = total_time + 1;
	best_time += ((best_time-1)/k) * 5;
	int worst_time = total_time + da_table[pass.length()];
	worst_time += ((worst_time-1)/k) * 5;
	printf("%d %d", best_time, worst_time);
}