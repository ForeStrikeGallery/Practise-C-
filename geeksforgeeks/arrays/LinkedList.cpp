#include<iostream>

using namespace std;

struct node
{
	int data;
	node *next;
};

int main()
{
	node *root;
	root = new node;
	root->data = 5;
	root->next = NULL;
	cout<<root->data;

	node* temp;
	temp = new node;
	temp->data = 6;
	root->next = temp;
	root->next->data = 7;
	temp->next = NULL;
	cout<<temp->data;

	node *conductor = root;
	
	while(conductor!= NULL)
	{
		cout<<conductor->data<<"-->";
		conductor = conductor->next;
	}

	
	 
	return 0;
}
