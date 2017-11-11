#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int N;
	int smallest = INT_MAX;
	cin>>N;
	char dir[N];
	cin>>dir;
	

	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}

	for(int i=0;i<N-1;i++){
		if(dir[i] == 'R' && dir[i+1] == 'L' ){
			
			int dist = arr[i+1] - arr[i];
			
			if(dist < smallest)
				smallest = dist;
		}
	}

	if(smallest != INT_MAX)
		cout<<smallest/2;
	else
		cout<<-1;



return 0;
}
