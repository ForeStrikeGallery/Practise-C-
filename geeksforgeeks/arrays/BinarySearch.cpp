#include<iostream>
#include<cstdio>
#include<ctime>

using namespace std;


 int BinarySearch(int[], int);
 void Display(int[]);	
 void Sort(int[]);

int main()
{	

	int arr[10] = {2,5,6,7,9,11,13,22,223,1000};
	int key; 


	Display(arr);
	Sort(arr);
	cin>>key;
	cout<<"It's at "<<BinarySearch(arr,key)+1;		
}


void Sort(int arr[])
{
	int i,j;
	
}

void Display(int arr[])
{
	for(int i=0;i<10;i++)
		cout<<arr[i]<<endl;
}

int BinarySearch(int arr[], int key)
{
 int low = 0;
 int high = 10;
 

 while(low<high)
 {	
	int middle = (low+high)/2;

	if( arr[middle] == key)
		return middle;
	else if( arr[middle] < key)
	{
		low = middle + 1;
	}

	else
	{
		high = middle - 1;
	}
 }

 cout<<"Not found";
	return -1;	
}


