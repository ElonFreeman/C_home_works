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

void build_graph(vertexnode *nodes)
{
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
}

void output_graph(vertexnode *nodes)
{
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
}

void BFS(vertexnode *vertexlist,int begin_vertex)
{
    deque<int> bfs_queue;
    bfs_queue.push_back(begin_vertex);
    access_lable[begin_vertex]=true;

    while(!(bfs_queue.empty()))
    {
        int index_fornt=bfs_queue.front();
        edge *current=(vertexlist[index_fornt]).first_edge;
        while(current!=nullptr)
        {
            if(access_lable[current->index]==false)
            {
                bfs_queue.push_back(current->index);
                access_lable[current->index]=true;
            }
            current=current->next;
        }

        cout << vertexlist[bfs_queue.front()].data << ' ';
        bfs_queue.pop_front();
    }
}

void DFS(vertexnode *begin,int begin_index)
{
    cout << begin[begin_index].data << ' ';
    access_lable[begin_index]=true;
    
    edge *edges=begin[begin_index].first_edge;
    while(edges)
    {
        if(access_lable[edges->index]==false)
        {
            DFS(begin,edges->index);
        }

        edges=edges->next;
    }
}

int main(void)
{
    cin >> num_vertex >> num_edge;
    vector<vertexnode> nodes(num_vertex);
    
    build_graph(&nodes[0]);
    output_graph(&nodes[0]); cout << endl;

    BFS(&nodes[0],0); cout << endl;
    for(size_t i=0;i<size(access_lable);i++) {access_lable[i]=false;}
    DFS(&nodes[0],0); cout << endl;

    return 0;
}