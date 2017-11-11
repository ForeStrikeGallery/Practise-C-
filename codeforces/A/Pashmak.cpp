#include<climits>
#include<iostream>

using namespace std;


int main(){

	int max = INT_MIN;
	int min = INT_MAX;
	long long int maxCount = 0;
	long long int minCount = 0;
	int N,b;

	cin>>N;
	while(N--){
		cin>>b;

		if(b == max){
			maxCount++;
		}

		if(b > max){
			
			max = b;
			maxCount = 1;
		}
		
		if(b == min){
			minCount++;
		}
		
		if(b < min){
			min = b;
			minCount = 1;
		}
		
	}
	if(max == min)
		cout<<max-min<<" "<<maxCount*(maxCount-1)/2;
	else
		cout<<max-min<<" "<<maxCount*minCount;	

return 0;	
}
