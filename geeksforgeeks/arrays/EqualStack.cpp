#include<iostream>

using namespace std;

int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int max(int a, int b, int c)
{
	int maxima = max(c,max(a,b));
	if(maxima == a)
		return 1;
	else if(maxima == b)
		return 2;
	else
		return 3;	
}

int main()
{

 int n1,n2,n3,i;
  cin>>n1>>n2>>n3;

	
 int cumH1[n1+1], cumH2[n2+1], cumH3[n3+1];
 for(i=1;i<n1+1;i++)
  { 
 	cumH1[0] = 0;
	cin>>cumH1[i];
	if(i)
		cumH1[i] = cumH1[i] + cumH1[i-1]; 	
   }
  for(i=1;i<n2+1;i++)
  {
 	cumH2[0] = 0;
	cin>>cumH2[i];
	if(i)
		cumH2[i] = cumH2[i] + cumH2[i-1]; 	
   }
   for(i=1;i<n3+1;i++)
  { 
 	cumH3[0] = 0;
	cin>>cumH3[i];
	if(i)
		cumH3[i] = cumH3[i] + cumH3[i-1]; 	
   }

	int H1 = cumH1[n1];
	int H2 = cumH2[n2];
	int H3 = cumH3[n3];

	for(i=n1;i>=0;i++)
		cumH1[i] = H1 - cumH1[n1-i];

	for(i=n2;i>=0;i++)
		cumH2[i] = H2 - cumH2[n2-i];

	for(i=n3;i>=0;i++)
		cumH3[i] = H3 - cumH3[n3-i];

while(true)
{ 
 switch(max(cumH1[n1],cumH2[n2],cumH3[n3]))
	{
		case 1: n1--;
			break;
		case 2: n2--;
			break;
		case 3: n3--;
			break;
		default:;		
	}
	
	if((cumH1[n1] == cumH2[n2])&&(cumH2[n2] == cumH3[n3]))
	{
		cout<<cumH1[n1];
		break;
	}

}	
 return 0;
}











