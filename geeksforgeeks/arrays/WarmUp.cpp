#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
 int i,j,sum = 0,k,n;
 cin>>n>>k;
 int arr[n];

 for(i = 0; i < n; i++)
	cin>>arr[i];


 for(i = 0; i < n-1; i++ )
	for(j = i+1 ; j < n; j++ )
	{
		if((arr[i]+arr[j])%k == 0)
			sum++;
	}	
 
 cout<<sum;
return 0;
}
