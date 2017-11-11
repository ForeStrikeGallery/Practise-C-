#include<iostream>

using namespace std;

void Merge(int arr[], int l, int m, int r)
{
 int i,j,k;
 int n1 = m-l+1;
 int n2 = r-m;
 int L[n1]; 
 int R[n2];
 for(i=0;i<n1;i++)
	L[i] = arr[i+l];
 
 for(i=0;i<n2;i++)
	R[i] = arr[i+1+m];

 i =0;
 j =0;
 k =l;
 while(i<n1 && j<n2) // if either passes the limit, the loop breaks.
 {
	if(L[i]<R[j])
	{
		arr[k] = L[i];
		i++;
	}
	else
	{
		arr[k] = R[j];
		j++;
	}
	k++;
 }

//passing the rest of the elements

 while(i<n1)
 {
	arr[k] = L[i];
	i++;
	k++;
 }

 while(j<n2)
 {
	arr[k] = R[j];
	k++;
	j++;
 }

}

void MergeSort(int arr[],int l,int r)
{
	if(r>l)
	{
		int mid = (l+r)/2;
		
		MergeSort(arr, mid+1, r);
		MergeSort(arr, l, mid);
		Merge(arr,l,mid,r);
	}
}




int main()
{
 int arr[] = {33,432,32,333,3};
 int n = sizeof(arr)/sizeof(arr[0]);
 MergeSort(arr,0,n);
 for(int i =0;i<n;i++)
	cout<<arr[i]<<endl;
 return 0;
}



