#include <iostream> 
#include <string>

using namespace std;

class node
{
public:
int data;
node *next;
node(int data){
    this->data=data;
    this->next=NULL;
}
};
void insertAtHead(node* &head,int d){
    node *temp=new node(d);
    temp->next=head;
    head=temp;
}
void print(node* &head){
    node *temp=head;
    while (temp != NULL)
    {
        cout<<temp->data<<" -> ";
temp=temp->next;
    }
    

}
int main() { 
    node *nod1=new node(10);
    node* head=nod1;
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);

    print(head);
 return 0;
}