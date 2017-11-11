#include<iostream>

using namespace std;

int swap(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}

void insertionSort(int arr[], int n)
{
int i; int j, key;
	for(i = n-1; i>1; i--)
	{
	 	key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j--; 
		}
		arr[j+1] = key;
	}

}

int main()
{
 int arr[] = {3,42,3,434,23,33,445,33,4};
   int n = sizeof(arr)/sizeof(arr[1]); 
 insertionSort(arr,n);
 for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
 return 0;
}
