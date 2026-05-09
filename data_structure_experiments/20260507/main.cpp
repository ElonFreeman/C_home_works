#include<bits/stdc++.h>
using namespace std;

struct bt_node
{
    int data;
    bt_node *lchild,*rchild;
};

void creat_bt_pre(bt_node **root)
{
    char data; cin >> data;

    if(data=='#')
    {
        *root=nullptr;
    }
    else
    {
        *root=new bt_node;
        (*root)->data=data;
        creat_bt_pre(&((*root)->lchild));
        creat_bt_pre(&((*root)->rchild));
    } 
}

void preorder(bt_node *root)
{
    if(root==nullptr)
    {return;}
    
    cout << (char)(root->data) << ' ';
    preorder(root->lchild);
    preorder(root->rchild);
}

void inorder(bt_node *root)
{
    if(root==nullptr)
    {return;}

    inorder(root->lchild);
    cout << (char)(root->data) << ' ';
    inorder(root->lchild);
}

void postorder(bt_node *root)
{
    if(root==nullptr)
    {return;}

    postorder(root->lchild);
    postorder(root->rchild);
    cout << (char)(root->data) << ' ';
}

void levelorder(bt_node *root)
{
    if(root==nullptr)
    {return;}


}


int main(void)
{
    bt_node *root=nullptr;

    creat_bt_pre(&root);
    preorder(root); cout << endl;
    inorder(root);  cout << endl;
    postorder(root);    cout << endl;
    //levelorder(root);   cout << endl;

    return 0;
}