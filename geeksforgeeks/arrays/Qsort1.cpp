#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int partition(int *arr,int low, int high, int S)
{
	int pivot = arr[high];
	int i = low-1;
	 for(int j =low; j<high;j++)
	 {
		if(arr[j]<pivot)
		{
			swap(&arr[j],&arr[++i]);
		}
	 }
	 swap(&arr[i+1],&arr[high]);
	 for(int i=0;i<S;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	 return i+1;
}


void qSort(int *arr, int low, int high, int S)
{
 if(high>low)
 {
	int p = partition(arr,low,high,S);
	qSort(arr,low,p-1,S);
	qSort(arr,p+1,high,S);
	
 }
}



int main()
{
int S;
cin>>S;
int arr[S];
for(int i=0;i<S;i++)
	cin>>arr[i];
qSort(arr,0,S-1,S);

return 0;

}
