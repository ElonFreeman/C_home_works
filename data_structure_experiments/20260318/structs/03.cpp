#include<bits/stdc++.h>
using namespace std;

struct infos
{
    int stu_id;
    int score;
};

void sort(infos *stu_info,int length)
{
    sort(stu_info,stu_info+length,[](int a,int b){return a>b;});
}

int mian(void)
{
    int n=0;
    cin >> n;
    vector<infos> stu_infos(n);
    for(infos &traverse:stu_infos)
    {
        cin >> traverse.stu_id;
        cin >> traverse.score;
    }



    return 0;
}