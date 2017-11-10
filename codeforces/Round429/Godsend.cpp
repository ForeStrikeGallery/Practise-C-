#include<iostream>
using namespace std;

int play_game(int *arr, int size, int player) {
	int total = 0;
	for(int i=0; i<size; i++) {
		total += arr[i];
	}

	int left_index = -1;
	int right_index = -1;
	
	left_index = get_index(arr, size, total, player)
	
	
}

int *get_index(int *arr, int size, int total, int player) {
	int index[2] = {-1, -1};
	int temp_total = total;
	int left_index = -1;
	int right_index = -1;
	for (int i=0; i<size; i++) {
		temp_total = temp_total - arr[i];
		if (temp_total%2 != player)
			left_index = i;
	}
	if (left_index == -1)
		return index;
	temp_total = total;
	for(int i=n-1; i>=0; i--) {
		temp_total = temp_total - arr[i];
		if (temp_total%2 != player)
			right_index = i;
	}

	i
	if (left_index < n-1-right_index) {
		index[0] = left_index;
		index[1] = n-1;
		return index;
	} else {
		index[0] = 0;
		index[1] = right_index;
		return index;
	}
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}

	int player_now = 0;
	int new_size = n;
	while(true) {
		if (player_now == 0) {
			new_size = play_game(arr, new_size, player_now) // arr changed inside
			if (new_size == -1)
				break;
			player_now = 1;
		} else if (player_now == 0) {
			new_size = play_game(arr, new_size, player_now)
			if (new_size == -1)
				break;
			player_now = 0;
		}

	}

	if (player_now == 0)
		cout << "Second";
	else
		cout << "First";
	return 0;
}
