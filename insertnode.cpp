#include <iostream>
using namespace std;
class Node
{public:
	int data;
	Node*next;
	 Node(int n){
	 	this->data=n;
	 	this->next=NULL;}
	 };
	 	Node* InsertNode()
	 	{
	 		Node*head=NULL;
	 		int n;
	 		cin>>n;
	 		while(n!=-1)
	 		{
	 			 Node *newnode=new Node(n);
	 			if (head==NULL)
              head=newnode;
	 		else
	 		{
	 			Node*temp=head;
	 			while(temp->next!=NULL)
	 			{
	 		      temp=temp->next;
	 			}
	 			temp->next=newnode;
	 		}
	 		
	 		cin>>n;
	 	}
