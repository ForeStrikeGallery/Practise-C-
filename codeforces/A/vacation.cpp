#include<iostream>

using namespace std;

int min(int a,int b) { if (a>b) return b; else return a;}
int min(int a,int b,int c) { return min(min(a,b),c);}
char opp(int c){
	if(c == 1)
		return 'R';
	else 
		return 'C';
}

char same(int c){
	if(c == 1)
		return 'C';
	else 
		return 'R';
}

int restCount(char *status, int *choice, int N, char first){
 int rCount = 0;
 int j;
	status[0] = first;
	
	for(int i = 0; i<N-1;i++){
		if(i != 0){
			switch(choice[i]){
				case 0: status[i] = 'R';
						rCount++;
						break;

				case 1: if(status[i-1] == 'R' || 'G' )
							status[i] = 'C';
						else {
							status[i] = 'R';
							rCount++;
						}
						break;

				case 2: if(status[i-1] == 'R' || 'C')
							status[i] = 'G';
						else{
							status[i] = 'R';
							rCount++;
						}
						break;

				case 3: if(status[i-1] == 'C' && choice[i+1] == 2){
							status[i] = 'R';
							rCount++;
						}else if(status[i-1] == 'G' && choice[i+1] == 1){
							status[i] = 'R';
							rCount++;
						}
							
						if(status[i-1] == 'C'&& choice[i+1] == 1)
							status[i] = 'G';
						else if(status[i-1] == 'G' && choice[i+1] == 2)
							status[i] = 'C';
						else {
								j = i;
							while(choice[j] == 3){
								if(choice[j+1] == 'R')
									status[i] = 'G';
								else{
									if((j-i)%2 == 0){
										status[i] == opp(choice[j+1]);
									}
									else
										status[i] == same(choice[j+1]);
										
								}
							}
						}
						break;	  
			}
		}
	}


	switch(choice[N-1]){
		case 0: status[N-1] = 'R';
				rCount++;
				break;

			case 1: if(status[N-2] == 'R' || 'G' )
							status[N-1] = 'C';
						else {
							status[N-1] = 'R';
							rCount++;
						}
						break;

				case 2: if(status[N-2] == 'R' || 'C')
							status[N-1] = 'G';
						else{
							status[N-1] = 'R';
							rCount++;
						}
						break;

			case 3: ;
	}

 return rCount;
}
int main(){

	int N;
	cin>>N;
	char status[N];
	int choice[N];
	int rCount = 0;
	int j;
	for(int i=0;i<N;i++) cin>>choice[i];

	rCount = min(restCount(status,choice,N,'R'),
				 restCount(status,choice,N,'G'),
				 restCount(status,choice,N,'C')
				);

	cout<<rCount;
	
	

}
