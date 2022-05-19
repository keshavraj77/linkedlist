Node* insert_recursive(Node*head,int pos,int Data)
	 	{
	 		if (head==NULL)
	 			return head;
	 		if (pos==0)
	 		{
	 			Node*newnode=new Node(Data);
	 			newnode->next=head->next;
	 			head->next=newnode;
	 			return head;
	 		}
	 		else
	 			{Node*temp=insert_recursive(head->next,pos-1,Data);
	 			head->next=temp;
	 			return head;}
	 	}
