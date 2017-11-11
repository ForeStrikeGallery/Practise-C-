#include<iostream>
using namespace std;

void sort(int *arr, int N){
	int key;
	int i,j;
	for(i = 1; i< N; i++){
		key = arr[i];				
		j = i-1;
		while(j>=0 && arr[j]<key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

int main()
{
	int K = 12,Kl;
	cin>>Kl;
	int arr[K];

	for(int i=0;i<K;i++){
		cin>>arr[i];	
	}
	
	sort(arr,K);
	int sum = 0, count = 0;
	while(count<K && sum < Kl){
		sum += arr[count++];
	}
		if(sum >= Kl)
			cout<<count;
		else
			cout<<-1;
}
