#include<bits/stdc++.h>

using namespace std;

int main() {


	int N;
	cin >> N;

	map<char, double> price_table;
	map<char, double> ::iterator it;
	char c;
	string line;
	double v, total;

	while(N--) {

		int K;
		cin >> K;
		for (int i=0; i<K; i++) {
			cin >> v;
			price_table[i] = v;
		}
		total = 0;
		int M;
		scanf("%d",&M);
		cin.ignore();
		for(int i=0; i<M; i++) {
			getline(cin, line);
			for(int j=0; j<line.size(); j++) { 
				char c = line[j];
				it = price_table.find(c); // O(logN)
				if (it != price_table.end())
					total += it->second;
			}
		}
		total /= 100;
		printf("%.2f$", total);

	}
}