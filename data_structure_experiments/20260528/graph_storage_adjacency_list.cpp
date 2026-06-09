#include<bits/stdc++.h>
using namespace std;

vector<bool> access_lable;
int num_vertex=0,num_edge=0;

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

void BFS(vertexnode *vertexlist)
{
    deque<vertexnode> bfs_queue;
    int vertex_index=0;
    while(size(bfs_queue))
    {
        bfs_queue.push_back(vertexlist[vertex_index]);
        edge *current=(vertexlist[vertex_index]).first_edge;
        while(current!=nullptr)
        {
            if(access_lable[current->index]==true)
            {
                current=current->next;
                continue;
            }
            else
            {
                bfs_queue.push_back(vertexlist[current->index]);
                current=current->next;
                access_lable[current->index]=true;
            }
        }
        cout << bfs_queue.begin()->data << ' ';
        bfs_queue.pop_front();
        vertex_index++;
    }
    
}

void DFS(vertexnode *begin)
{
    for(int i=0;i<num_vertex;i++)
    {
        cout << begin[i].data << ' ';
        access_lable[i]=true;
        
        if(begin[i].first_edge)
        {
            DFS(&begin[begin[i].first_edge->index]);

        }
    }

}

int main(void)
{
    cin >> num_vertex >> num_edge;
    vector<vertexnode> nodes(num_vertex);
    for(int i=0;i<num_vertex;i++)
    {
        cin >> nodes[i].data,
        nodes[i].first_edge=nullptr,
        nodes[i].end=nodes[i].first_edge;
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