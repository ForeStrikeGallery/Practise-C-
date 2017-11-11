#include<iostream>
using namespace std;

int minDist(int *arr,int n)
{
int i,j;
int lowest = -1;

for(int i=0;i<n-1;i++)
 {
	for(j = i+1;j<n;j++)
	{
		if(arr[j] == arr[i])
		{
		  if(lowest == -1 || lowest>j-i)
		  	lowest = j-i;
		  break;	
		}
	}
 }

 return lowest;
}


int main()
{
 int n;
 cin>>n;
int arr[n];
 for(int i=0;i<n;i++)
	cin>>arr[i];
 cout<<minDist(arr,n);

	
}
