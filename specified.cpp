#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
void create(int);
void randominsert(int);
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void create(int item)
{
    struct node *newnode=new node;
    if(newnode==NULL)
    {
        cout<<"\overflow";
    }
    else
    {
        newnode->data=item;
        newnode->next=head;
        head=newnode;
        cout<<"\n node inserted";
    }
}
void randominsert(int item)
{
    struct node *newnode=new node;
    struct node *temp;
    int i,loc;
    if(newnode==NULL)
    {
        cout<<"\n overflow";
    }
    else
    {
     cout<<"\n enter your inserted position";
     cin>>loc;
     newnode->data=item;
     temp=head;
     for(i=0;i<=loc;i++){
        temp=temp->next;
        while(temp=NULL)
        {
            cout<<"\n can't inserted";
            return ;
        }
     }
     newnode->next=temp->next;
     temp->next=newnode;
     cout<<"\n node inserted";

    }
}
int main()
{
    int item,choice;
    do
    {
        cout<<"\n enter your item";
        cin>>item;
        if(head==NULL)
        {
            create(item);

        }
        else
        {
            randominsert(item);
        }
        cout<<"\n press 0 to insert more";
        cin>>choice;
    }
    while(choice==0);
    getch();
    return 0;
}
