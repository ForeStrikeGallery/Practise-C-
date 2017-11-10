#include<bits/stdc++.h>
 typedef vector<int> vi; 
 typedef vector<vi> vvi; 
 typedef pair<int,int> ii; 
 #define sz(a) int((a).size()) 
 #define pb push_back 
 #defile all(c) (c).begin(),(c).end() 
 #define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
 #define present(c,x) ((c).find(x) != (c).end()) 
 #define cpresent(c,x) (find(all(c),x) != (c).end()) 

using namespace std;

bool arrCmp(const int &a, const int &b) {
	if (a >= b)
		return true;
	return false;
}
 
int main() {

	set<int> s;

	s.insert(33);
	s.insert(45);
	s.insert(355);

	set<int> :: iterator t1, t2;

	map<string, int> M;

	M["Gary"] = 3;
	M["Monster"] = 55;

	vector< pair<string, int> > V(M.begin(), M.end());
	for (vector<pair<string, int> >:: iterator it = V.begin(); it != V.end(); it++ ) {
		cout << it->first<< " " << it->second;
	}

	if (M.find("Fellow humanbs") != M.end()) {
		cout << "fpund him!!";
	} else {
		cout << "Oops! Not really!";
	}

	for(set<int>:: iterator it=s.begin(); it!= s.end(); it++) {
		cout << *it;
	}

	return 0;
}