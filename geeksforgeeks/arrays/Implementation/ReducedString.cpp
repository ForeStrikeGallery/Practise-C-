#include<iostream>
#include<cstdio>
using namespace std;

int main(){

	int N;
	cin>>N;
	char arr[N], new_arr[N];
	int j = 0;
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	int i=0;
	new_arr[0] = '0';
	while(i<N){
	
		if(arr[i] == arr[i+1]){
			arr[i] = '0';
			arr[i+1] = '0';			
			i += 2;
			}
		else{
			
	
			new_arr[j++] = arr[i++];
			
		}		
	}

	if(new_arr[0] == '0')
		cout<<"Empty String";
	else{
		for(int i=0;i<j;i++){
			cout<<new_arr[i];
		}
	}
		

}
