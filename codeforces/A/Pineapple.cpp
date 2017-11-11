#include<iostream>
using namespace std;

int main(){
long long int T;
long long int S;
long long int X;

cin>>T>>S>>X;

X = X - T;
if(X < S && X != 0){
	cout<<"NO";
	return 0;
}

while(X>1){ 
	X = X - S;
}

if(X == 0 || X == 1){
	cout<<"YES";
}
else{
	cout<<"NO";
}

return 0;
}
