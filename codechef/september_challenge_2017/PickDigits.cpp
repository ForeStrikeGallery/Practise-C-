#include<iostream>
#include<string>

using namespace std;


void print_array(int *arr, int N) {

	for (int i=0; i<N; i++) {
		cout << arr[i] << " ";
}
	cout << endl;
}

void print_array_bool(bool *arr, int N) {

	for (int i=0; i<N; i++) {
		cout << arr[i] << " ";
}
cout << endl;
}

string get_sorted_picked(string s) {
	
	//cout << s;

	bool all_digits[10];
	bool repeat_digits[10];
	bool all_letters[26];

	for (int i=0; i<10; i++) {
		all_digits[i] = false;
		repeat_digits[i] = false;
	}
	
	for (int i=0; i<26; i++)
		all_letters[i] = false;


		
	for(int i=0; i<s.length(); i++) {
		int digit = int(s[i]) - 48;
	//	cout << digit;
		
		if (!all_digits[digit])
			all_digits[digit] = true;
		else {
			if (!repeat_digits[digit])
				repeat_digits[digit] = true;
		}

	}

	//print_array_bool(all_digits, 10);
	


	for (int i=6; i<10; i++) {
		int limit = 10;
		int j = 0;
		
		if (i==6)
			j = 5;
		
		if (i == 9)
			limit = 1;
		
		for(;j<limit; j++) {
			if (all_digits[i] && all_digits[j]) {

				int num = i*10 + j;
				
				if (i == j)
					if (!repeat_digits[i]) 
						continue;
				
		//		cout << num-65 << " ";
				all_letters[num - 65] = true;
					
			}	
			//
		}
	}

	
	string result = "";

	for(int i=0; i<26; i++) {
		if (all_letters[i]) {
			char letter = char(i + 65);
	//		cout << letter;
			result += letter;
		}
	}

	return result;
}

int main() {
	
	int T;
	cin >> T;
	while(T--) {
		string s;
		cin >> s;
		//cout << s;
		string result = get_sorted_picked(s);
		cout << result << endl;
	}
	return 0;
}