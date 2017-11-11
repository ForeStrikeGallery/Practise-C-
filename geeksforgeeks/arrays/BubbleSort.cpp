#include<iostream>

using namespace std;

// auxillary functions
void bubbleSort(int[],int);
void display(int[],int);
 void swap(int *x, int *y)
 {
	int temp = *x;
    *x = *y;
	*y = temp;
 }




void bubbleSort(int arr[], int n)
{
 for(int i=n-1;i>0;i--)
 {
	for(int j=0;j<i;j++)
	{
		if(arr[j]>arr[j+1])
			swap(&arr[j],&arr[j+1]);
	}
 }
}

void display(int arr[], int n)
 {
   for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
 }	
int main()
{
 int arr[] = {4,34,4,32,53,33,6,4,768,35};
 int n = sizeof(arr)/sizeof(arr[0]);
 bubbleSort(arr,n);
 display(arr,n);

}


