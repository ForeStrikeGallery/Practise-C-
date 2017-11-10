#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main() {


	int N, T;
	cin >> N;

	while(N--) {
		string name;
		getline(cin, name);
		cout << "please work motherfucker!@";
		cin >> T;
		string team_a, team_b;
		string goal_a, goal_b;
		getline(cin, team_a,'#');
		getchar();
		getline(cin, goal_a, '@');
		getchar();
		getline(cin, goal_b, '#');
		getchar();
		getline(cin, team_b, '#');

		cout << team_a << team_b << goal_a << goal_b;




	}

 return 0;
}