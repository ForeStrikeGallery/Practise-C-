#include<iostream>
using namespace std;

int main(){

	int N;
	int m,c,sumM=0,sumC=0;
	cin>>N;
	while(N--){
		cin>>m>>c;
		if(m>c)
			sumM++;
		if(m<c)
			sumC++;
	}

	if(sumM>sumC)
		cout<<"Mishka";
	else if(sumC>sumM)
		cout<<"Chris";
	else
		cout<<"Friendship is magic!^^";
	return 0;
}
