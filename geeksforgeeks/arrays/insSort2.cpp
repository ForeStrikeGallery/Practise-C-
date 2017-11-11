#include<iostream>

using namespace std;

void insertionSort(int* arr, int n)
{
 int i,j,count = 0;
 for(int i=1;i<n;i++)
 {

	int key = arr[i];
	j = i-1;
	while(j>=0 && arr[j]>key)
	{
		arr[j+1] = arr[j];
		j--;
		count++;
	}	
	arr[j+1] = key;


	
 }
 cout<<count;	
}

int main()
{
int S;
cin>>S;
int arr[S];
for(int i=0;i<S;i++)
	cin>>arr[i];
insertionSort(arr,S);
return 0;
}
