#include<bits/stdc++.h>
using namespace std;

struct node
{
    int datadomain;
    node *pd_next;
};

void init(node *head)
{
    /*creat a head node*/
    head=new node;
    head->datadomain=0;
    head->pd_next=nullptr;
}

void insert(node *head,int data)
{
    /*move to the tail*/
    while(head)
    {
        head=head->pd_next;
    }

    /*creat new node*/
    node *nextnode=new node;
    nextnode->datadomain=data;
    nextnode->pd_next=nullptr;
    /*tail link to new node*/
    head->pd_next=nextnode;
}

int  tranverse_output(node *head)
{
    /*check if the list created*/
    if(head==nullptr)
    {
        cout << "List not defined!" << endl;
        return 1;
    }
    /*check if the list is empty*/
    if(head->pd_next==nullptr)
    {
        cout << "List is empty!" << endl;
        return 1;
    }

    /*tranverse output*/
    while(head)
    {
        cout << head->datadomain;
        head=head->pd_next;
    }

    return 0;
}

int main(void)
{
    node *head=nullptr;

    while(1)
    {
        char command;
        cin >> command;

        switch(command)
        {
            case 'I' : init(head);break;

            case 'A' : 
            {
                int data=0;
                cin >> data;
                insert(head,data);
            }; break;

            case 'C' :
            {
                int n=0;
                cin >> n;
                for(int i=0;i<n;i++)
                {
                    int data=0;
                    cin >> data;
                    insert(head,data);
                }
            }; break;

            case 'P' : tranverse_output(head);break;
        }
    }

    return 0;
}