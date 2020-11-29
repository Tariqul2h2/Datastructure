#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node()
	{
		next=NULL;
	}
};

class LinkList
{
public:
	Node *head;
	LinkList()
	{
		head=NULL; //make my node null,when I start linklist, it initialized in null.
	}
	void push(int data)
	{
		Node *node=new Node(); //creting new node
		node->data=data; //passing data in to node
		node->next=NULL; //then select next node to null.
		if(head==NULL) //when my head node is null, then pass node data to head_node
		{
			head=node; //data assaigning to head_node
		}
		else //if my head_node is not null, then.....
		{
			Node *temp=head; //push my data into a temporary_node.Head fixed in his position and we r using temp node.
			while(temp->next!=NULL) // till node of temporary_node isn't nuLL, we keep pushing data into node. 
			{
				temp=temp->next; //now my next node contains temp data, mean 
			}
			temp->next=node; //when loop end, next element of temp cointains next data and exit from else condition.
		}
	}
	void display()
	{
		Node *temp=head; //secure head node and started using a temporary node.
		while(temp!=NULL) //loop continuing till it is not null.
		{
			printf("%d ",temp->data); //it started showing data's.
			temp=temp->next; //pars in to next element.
		}
		printf("\n");
	}

	
	void deleteNode(int data) //important
	{
		Node *current=head; //make sure my head node is secure.....
		if(current==NULL) //if no data contains, it returns null
		{
			return;
		}
		else if(current->data==data) //searching data
		{
			head=current->next; //make my head node is next element
			delete current; //now delete my head node
		}
		else //now, if I wanna delete data randomly, then it pass in this condition statement,
		{
			while(current->next!=NULL) //now my head node is current_node(a vertual node) and if it continues till it's next element is not NULL
			{
				if(current->next->data==data) //if my desire data found in next node,then...
				{
					Node *temp=current->next; //push that data into a temporary node.
					current->next=current->next->next; //now passing my current node to its next data
					delete temp; //now delete my desire data
					break; //no need to go further,it stop here and go back from while loop
				}
				current=current->next; //if my desire data isn't found in next node,then this statement search it here.
			}
		}
	}
};


int main()
{
	LinkList L;
	L.push(10);
	L.push(20);
	L.push(30);
	L.push(40);
	L.push(50);
	L.display(L.head);
	L.deleteNode(10);
	L.display(L.head);
	L.deleteNode(30);
	L.display(L.head);
	L.deleteNode(50);
	L.display(L.head);
//	L.reverse(L.head,NULL);
//	L.display();
	return 0;
}
