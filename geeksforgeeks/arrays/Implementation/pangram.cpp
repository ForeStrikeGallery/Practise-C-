#include<iostream>
#include<string>
#include<cstdio>
#include<ctype.h>

using namespace std;

int main()
{
 	string S;
 	int numLett = 26;
	int arr[numLett];
	bool isPangram = true;

	cin>>S;	

	for(int i=0;i<numLett;i++)
		arr[i] = 0;
	for(int i=0;i<S.length();i++){
		S[i] = tolower(S[i]);
	}


	for(int i=0;i<S.length();i++){
		if(S[i] == ' ')
			continue;

		int l = S[i]-'a';		
		arr[l] = 1;
	}
	
	for(int i=0;i<numLett;i++){
		if(arr[i] == 0)
			isPangram = false;
	}

	if(isPangram)
		cout<<"pangram";
	else
		cout<<"not pangram";

return 0;
}
