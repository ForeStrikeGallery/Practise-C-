#include<iostream>
using namespace std;
int main()
{
 int T,N,sum = 0;

 cin>>T;

 while(T--)
 {
	cin>>N;
	int Num = N;
	sum = 0;	
	while(N)
	{   
		if(Num%(N%10))
			sum++;
		N /= 10;
	}
	cout<<sum;
 }
 return 0;
}
