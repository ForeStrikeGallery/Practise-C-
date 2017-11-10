#include<bits/stdc++.h>

using namespace std;

struct Pair {
	int index;
	int value;
};

long long int power(int a, int b) {
	long long int power = 1;

	for (int i=0; i<b; i++){
		power *= a; 
	}

	return power;
}

class Data {

	int numVisited;
	int numInMemo;
	long long  dataVisited;
	long long dataInMemo;
	int arrSize;

public:
	Data(int arrSize) {
		numVisited = 0;
		numInMemo = 0;
		dataVisited = 0;
		dataInMemo = 0;
		this->arrSize = arrSize;
	}

	void add(int index, int value) {
		dataInMemo = dataInMemo*arrSize + index;
		dataInMemo = dataInMemo*arrSize + value;
		dataVisited = dataVisited*arrSize + index;

		numVisited += 1;
		numInMemo += 2;

		cout << "added values" << index << " " << value<<endl;
		//print_stats();

	}

	struct Pair extract() {
		Pair p;
		
		p.index = dataInMemo/power(arrSize, --numInMemo);
		dataInMemo = dataInMemo % power(arrSize, numInMemo);

		
		p.value = dataInMemo/power(arrSize, --numInMemo);
		dataInMemo = dataInMemo % power(arrSize, numInMemo);

		cout << "Extracted values: "<<p.index<<" "<<p.value;
		//print_stats();
		return p; 
	}

	bool isNotVisited(int index) {
		long long  tempData = dataVisited;

		while(tempData >= 0) {
			int val = tempData%arrSize;
			if (val == index) {
				return false;
			}
			tempData /= arrSize;
		}

		return true;
	}

	int getNumVisited() {
		return numVisited;
	}

	void print_stats() {
		cout << "\ninfo memo " << dataInMemo;
		cout << "\n num memo "  << numInMemo;
		cout << "\ninfo visited " << dataVisited;
		cout << " \nnum visited " << numVisited << endl;
	}


};

int main() {

	int t;
	cin >> t;

	while(t--) {

		int N, e;
	
		cin >> N;

		vector<int> OriginalArr;
		for (int i=0; i<N; i++) {
			cin >> e;
			OriginalArr.push_back(e);
		}
		

		Data data(OriginalArr.size());
		data.add(0,OriginalArr[0]);
		OriginalArr[0] = OriginalArr[OriginalArr[0]];	
		
	
		cout << data.print_stats();
		while(data.getNumVisited() < OriginalArr.size()) {
			
			struct Pair extracted; 
			extracted =  data.extract();
			
			for (int i=0; i<OriginalArr.size(); i++) {
		
				if (data.isNotVisited(i)) {
					cout << i;				
					if (OriginalArr[i] == extracted.index) {
					
						data.add(i, OriginalArr[i]);
						OriginalArr[i] = extracted.value;
					}
				}	

			}

		}


		for (int i=0; i<OriginalArr.size(); i++)
			cout << OriginalArr[i] << " ";
		


	}
}