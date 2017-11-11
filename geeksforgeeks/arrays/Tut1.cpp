#include<iostream>
using namespace std;
int main()
{
int V,n;
cin>>V;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
	cin>>arr[i];
int mid;
int low = 0;
int high = n-1;
while(high>low)
 {
	 mid = (high+low)/2;
	if(arr[mid] == V)
		break;
	else if(arr[mid]<V)
	{
		low = mid+1;
	}
	else
		high = mid-1;
 }
cout<<mid;
return 0;
}
