#include<iostream>
using namespace std;
int main()
{
int S, val;
cin>>S;
int count[100];
for(int i=0;i<100;i++)
	count[i] = 0;

for(int i=0;i<S;i++)
{
	cin>>val;
	count[val]++;
}
for(int i=0;i<100;i++)
cout<<count[i]<<" ";
return 0;
}
