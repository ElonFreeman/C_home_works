#include<bits/stdc++.h>
using namespace std;


int main(void)
{
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        cin >> arr.at(i);
    }

    int m1,m2;
    cin >> m1 >> m2;

    for(int i=0;i<n;i++)
    {
        if(arr.at(i)==m1||arr.at(i)==m2)
        {
            
        }
    }
    return 0;
}