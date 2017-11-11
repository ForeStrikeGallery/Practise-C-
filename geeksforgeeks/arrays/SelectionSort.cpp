#include<iostream>
using namespace std;

 void SelectionSort(int[], int);


int main()
{
 int arr[] = {3,42,3,434,23,33,445,33,4};
   int n = sizeof(arr)/sizeof(arr[1]); 
 SelectionSort(arr,n);
 for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
 return 0;
}

void SelectionSort(int arr[], int n)
{
 int i;
 int j;

 for(i=0;i<n-1;i++)
 {
 	int smallest = arr[i];
	for(j=i+1;j<n;j++)
	{
		if(smallest>arr[j])
		{
			smallest = arr[j];
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
 }	
}


