#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int size = s.length();
	char hello[] = {'h', 'e', 'l', 'l', 'o'};
	int index = 0;
	for (int i=0; i<size; i++) {
		if (s[i] == hello[index]) {
			index++;
		}
	}

	if(index == 5)
		cout << "YES";
	else 
		cout << "NO";	
}
