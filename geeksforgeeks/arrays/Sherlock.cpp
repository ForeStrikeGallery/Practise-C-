#include<iostream>
using namespace std;

void rightCircularRotate(int *arr, int n, int k)
{
 while(k--)
 {
	int last = arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		arr[i+1] = arr[i];
	}
	arr[0] = last;
 }	

}


int main()
{
 int n,k,q;
  cin>>n;
 cin>>k;
 cin>>q;

 int arr[n], query[q];
 for(int i=0;i<n;i++)
	 cin>>arr[i];

 for(int i=0;i<q;i++)
	 cin>>query[i];

	rightCircularRotate(arr,n,k);
	for(int i=0;i<q;i++)
	{
		 cout<<arr[query[i]]<<endl;
	}
}
