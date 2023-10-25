#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    public:
        node()
        {
            data=0;
            next=nullptr;
        }
};
class singlylinkedlist
{
    private:
    node *head;
    public:
        singlylinkedlist()
        {
            head=nullptr;
        }
        void beginning(int data)
        {
            node *newnode = new node;
            newnode->data=data;
            newnode->next=head;
            head=newnode;
        }
        void lastnode(int data)
        {
            node *newnode = new node;
            newnode->data=data;
            node *last=head;
            while(last->next!=NULL)
            {
                last=last->next;
            }
            last->next=newnode;
        }
        void displaynode()
        {
            node *temp=head;
            while(temp!=NULL)
            {
                cout<<"data: "<<temp->data<<"\tSelf address: "<<temp<<"\tNext address: "<<temp->next<<endl;
                temp=temp->next;
            }
            cout<<endl;
        }
        void delfirstnode()
        {
            node *temp=head;
            head=head->next;
            delete temp;
        }
        void dellastnode()
        {
            node *temp=head;
            node *last;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;

            }
            last=temp->next;
            temp->next=NULL;
            delete last; 
        }
};
int main()
{
    singlylinkedlist sll1;
    sll1.beginning(40);
    sll1.beginning(50);
    sll1.beginning(60);
    sll1.beginning(70);
    sll1.lastnode(80);
    sll1.displaynode();
    
    sll1.delfirstnode();
    sll1.displaynode();
    sll1.dellastnode();
    sll1.displaynode();
    return 0;
}