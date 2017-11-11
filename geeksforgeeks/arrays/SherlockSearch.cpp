#include<iostream>

using namespace std;

const int Nmax = 100000;

int main()
{
int N;
int T;


bool found = false;
	cin>>T;
	while(T--)
		{ 
		cin>>N;

		int arr[N];
		int cumSum[N];
		int cumSumRev[N];
		int sum = 0;

		for(int i=0;i<N;i++)
			{
				cin>>arr[i];
				cumSum[i] = sum;
				
				sum += arr[i];
		
			}
	
		 for(int i=0;i<N;i++)
			{
				
				cumSumRev[i] = sum - arr[i] - cumSum[i];

				cout<<cumSumRev[i]<<" "<<cumSum[i];
				if(cumSumRev[i] == cumSum[i])
				{
					found = true;
					cout<<"YES"<<endl;
					break;
				}
			}


		 if(!found)
			cout<<"NO"<<endl;
		}

 return 0; 
}
