#include<bits/stdc++.h>
using namespace std;

vector<bool> access_lable;
int num_vertex=0,num_edge=0;
    vector<vertexnode> nodes(num_vertex);

struct edge
{
    int index;
    edge *next;
};

struct vertexnode
{
    char data;
    edge *first_edge,*end;
};

void BFS(vertexnode *begin)
{
    deque<vertexnode> bfs_queue;
    while(size(bfs_queue))
    {
        bfs_queue.push_back(*begin);
        edge *current=(*begin).first_edge;
        while(current!=nullptr)
        {
            bfs_queue.push_back(begin[(*current).index]);
            current=current->next;
        }
    }
    
}

void DFS(vertexnode *begin)
{
    
}

int main(void)
{
    cin >> num_vertex >> num_edge;
    for(int i=0;i<num_vertex;i++)
    {
        cin >> nodes[i].data,nodes[i].first_edge=nullptr,nodes[i].end=nodes[i].first_edge;
        access_lable.push_back(false);
    }

    for(int i=0;i<num_edge;i++)
    {
        int head,adjp_index; cin >> head >> adjp_index;
        edge *newedge=new edge;
        newedge->index=adjp_index,newedge->next=nullptr;

        if(nodes[head].first_edge==nullptr)
        {nodes[head].first_edge=newedge,nodes[head].end=newedge;}
        else
        {nodes[head].end->next=newedge,nodes[head].end=newedge;}
    }

    for(int i=0;i<num_vertex;i++)
    {
        cout << nodes[i].data << ' ';
        edge *current=nodes[i].first_edge;
        while(current!=nullptr)
        {
            cout << nodes[current->index].data << ' ';
            current=current->next;
        }
        cout << endl;
    }

    return 0;
}