#include<bits/stdc++.h>
using namespace std;

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

int main(void)
{
    int num_vertex=0,num_edge=0; cin >> num_vertex >> num_edge;
    vector<vertexnode> nodes(num_vertex);
    for(size_t i=0;i<num_vertex;i++)
    {
        cin >> nodes[i].data,nodes[i].first_edge=nullptr,nodes[i].end=nodes[i].first_edge;
    }

    for(size_t i=0;i<num_edge;i++)
    {
        int head,tail; cin >> head >> tail;
        edge *newedge=new edge;
        newedge->index=tail,newedge->next=nullptr;

        if(nodes[head].first_edge==nullptr)
        {nodes[head].first_edge=newedge,nodes[head].end=newedge;}
        else
        {nodes[head].end->next=newedge,nodes[head].end=newedge;}
    }

    return 0;
}