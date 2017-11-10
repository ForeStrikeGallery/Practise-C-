#include<iostream>
#include<ctype.h>
using namespace std;


int main()
{
	char chess_pieces[] = {'q','r','b','n','p','k'};
	char points[] = {9, 5, 3, 3, 1};
	int num = sizeof(points)/sizeof(points[0]);

	int sum_white = 0;
	int sum_black = 0;

	for(int i=0; i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			char c;
			cin >> c;
			if (c == '.')
				continue;
			if (!islower(c))
			{
				c = tolower(c);
				for(int k=0; k<num; k++)
				{
					if (c == chess_pieces[k])
						sum_white += points[k];
				}
			}
			else 
			{
				for(int k=0; k<num; k++)
				{
					if(c == chess_pieces[k])
						sum_black += points[k];
				}
			}
			
		}
		
	}

	if (sum_white > sum_black)
		cout << "White";
	else if (sum_black > sum_white)
		cout << "Black";
	else 
		cout << "Draw";

	return 0;
}










