#include<bits/stdc++.h>
using namespace std;

struct bt_node
{
    int data;
    bt_node *lchild,*rchild;
};

bt_node* creat_bt_pre()
{
    bt_node *root;

    return root;
}

void preorder(bt_node *root)
{
    if(root==nullptr)
    {return;}
    
    cout << root->data;
    preorder(root->lchild);
    preorder(root->rchild);
}

void inorder(bt_node *root)
{

}

void postorder(bt_node *root)
{

}

void levelorder(bt_node *root)
{

}


int main(void)
{
    bt_node *root=creat_bt_pre();

    preorder(root);
    inorder(root);
    postorder(root);
    levelorder(root);

    return 0;
}