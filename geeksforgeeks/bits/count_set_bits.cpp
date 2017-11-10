#include<iostream>
#include<stdio.h>
using namespace std;

unsigned int countSetBits(unsigned int n) {
	unsigned int count = 0;
	while(n) {
		count += n & 1; // 1 if 1 in 0th position
		n >>= 1; // Right shifting n by 1
	}
	return count;
	
}

int main() {
	int i = 9;
	printf("%d", countSetBits(i));
	return 0;
}
