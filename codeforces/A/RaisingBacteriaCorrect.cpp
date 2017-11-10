/*

	Raising Bacteria:

Initially, the box is empty. Each morning, you can put any number of bacteria 
into the box. And each night, every bacterium in the box will split into 
two bacteria. You hope to see exactly x bacteria in the box at some moment.

What is the minimum number of bacteria you need to put into the box across those days?

---------------------

 If there are X bacteria on the last day, it would be X/2 the previous day,
 X/4 the day before etc. If we don't add any more bacteria that is. 
 But as we calculate the series X, X/2, X/4... if we come across an
 odd number, then we can conclude that some number Y had to be added
 to achieve it. Since the series would only contain even numbers. Now, we 
 also need to minimize the number that we have to add. And we ask ourselves,
 what is the smallest number that we can add so that an odd number becomes
 an even number? The answer is 1

 This is a greedy solution. We assume that by adding the smallest possible
 number at each step(if it is necessary), we can minize the total amount
 of numbers that we have to add. 


*/

#include<iostream>
using namespace std;

int calc(int n)
{
	int count = 0;
	while(n > 0) 
	{
		if (n%2 == 1)
			count += 1;		
		n /= 2;
	}
	return count;
}

int main() 
{
	int X;
	cin >> X;
	cout << calc(X);
	return 0;
}
