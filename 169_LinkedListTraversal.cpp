#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *ptr;
};
void display(node *list)
{
    while(list!=NULL)
    {
        cout<<list->data<<"->";
        list=list->ptr;
    }
    cout<<"NULL";
}
int main()
{
    node* first=new node();
    node *second=new node();
    node *third=new node();
    node *fourth=new node();
    first->data=10;
    first->ptr=second;
    second->data=20;
    second->ptr=third;
    third->data=30;
    third->ptr=fourth;
    fourth->data=40;
    display(second);
    return 0;
}