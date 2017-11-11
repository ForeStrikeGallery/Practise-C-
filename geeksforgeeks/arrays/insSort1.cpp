#include<iostream>
using namespace std;

int main()
{
int n;
bool enter = false;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
	cin>>arr[i];
int key = arr[n-1];
int j = n-2;
while(j>=0 && arr[j]>key)
{ 
 	enter = true;
	arr[j+1] = arr[j];
	j--;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
arr[j+1] = key;
if(enter)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}

return 0;
}
