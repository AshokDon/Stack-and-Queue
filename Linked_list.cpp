#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node* head=NULL;
void insert(int val)
{
    //struct node* new_node=(struct node*) malloc(sizeof(struct node));
    node *new_node=NULL;
    new_node=new node();
    new_node->data=val;
    new_node->next=head;
    head=new_node;
}
void Display()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    insert(2);
    insert(5);
    insert(7);
    insert(9);
    Display();
    return 0;
}
