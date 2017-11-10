#include<bits/stdc++.h>

using namespace std;


int main() {

	int T;
	int sigma, N;
	cin>>T;
	while(T--) {
		cin >> N;
		cin >> sigma;

		if(N==1) {
			cout<<-1<<endl;
			continue;
		}

		if (N%2 == 0) {
			for (int i=0; i<N/2; i++) {
				cout << -sigma<< " ";
			}

			for (int i=N/2; i<N; i++) {
				cout << sigma <<" " ;
			}

			cout << endl;
		} else {

			cout << 0 << " ";
			N = N-1;
			float val = sigma*sqrt(float(N+1)/(N));

			
			for (int i=0; i<N/2; i++) {
				cout << -val<< " ";
			}

			for (int i=N/2; i<N; i++) {
				cout << val <<" " ;
			}				

			cout << endl;
		}
	}	
	return 0;
}