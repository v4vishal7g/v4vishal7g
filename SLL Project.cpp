#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node* Next;
	Node(int data)
	{
		this->data=data;
		this->Next=NULL;
		}	
};
void insertAthead(Node* &head,Node* &tail,int d)
{
	if(head==NULL)
	{
		Node* temp=new Node(d);
		head=temp;
		tail=temp;
		return;
	}
	else
	{
		Node*temp=new Node(d);
		temp->Next=head;
		head=temp;
	}
}
void insertAttail(Node* &tail,Node* &head,int d)
{
	if(tail==NULL)
	{
		Node* temp=new Node(d);
		tail=temp;
		head=temp;
		return;
	}
	else
	{
		Node* temp=new Node(d);
		tail->Next=temp;
		tail=temp;
	}
}
void inserAtposition(Node* &head,Node* &tail,int position,int d)
{
	if(position==1)
	{
		insertAthead(head,tail,d);
		return;
	}
	Node* temp=head;
	int cnt=1;
	while(cnt<position-1)
	{
		temp=temp->Next;
		cnt++;
	}
	if(temp->Next==NULL)
	{
		insertAttail(tail,head,d);
		return;
	}
	Node* InsertNode=new Node(d);
	InsertNode->Next=temp->Next;
    temp->Next=InsertNode;
	
}
void print(Node* &head)
{
	Node* temp=head;
	while(temp!=NULL)
     {
     	cout<<temp->data<<" ";
     	temp=temp->Next;
		 }	
	cout<<endl;
	}
int main()
{
	Node* head=NULL;
	Node* tail=NULL;
	insertAthead(head,tail,11);
	print(head);
	insertAthead(head,tail,9);
	print(head);
    insertAthead(head,tail,7);
	print(head);
	insertAttail(tail,head,2);
	print(head);
	insertAttail(tail,head,1);
	print(head);
	inserAtposition(head,tail,1,13);
	print(head);
	inserAtposition(head,tail,3,10);
	print(head);
	inserAtposition(head,tail,4,8);
	print(head);
}
