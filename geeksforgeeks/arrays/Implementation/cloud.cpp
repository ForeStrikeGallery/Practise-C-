#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int arr[N];
	int count = 0;
	bool print = false;
	for(int i=0;i<N;i++)
		cin>>arr[i];

	int pos = 0;
	while(pos != N-1){
		if(pos == N-2){
			print = true;
			cout<<count+1;	
			break;
		}
		if(arr[pos+2] == 0){
			pos += 2;
			count++;
			continue;
		}

		if(arr[pos+1] == 0){
			pos += 1;
			count++;

		}
		
			
	}	

	if(!print)
		cout<<count;
}
