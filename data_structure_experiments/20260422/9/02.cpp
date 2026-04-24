#include<bits/stdc++.h>
using namespace std;

struct parenth
{
    int top=-1;
    vector<char> str_left; 
};

void check(string str)
{
    parenth paren;
    for(int i=0;i<size(paren.str_left);i++)
    {
       if(str[i]=='(' || str[i]=='[' || str[i]=='{')
       {
            paren.str_left.push_back(str[i]);
            paren.top++;
       }
       else if(str[i]==')' || str[i]==']' || str[i]=='}')
       {
            if(str[paren.top]=='(' && str[i]==')')
            {
                paren.str_left.pop_back();
                paren.top--;
            }
            else if(str[paren.top]=='[' && str[i]==']')
            {
                paren.str_left.pop_back();
                paren.top--;
            }
            else if(str[paren.top]=='{' && str[i]=='}')
            {
                paren.str_left.pop_back();
                paren.top--;
            }
            else
            {
                cout << "false";
                return;
            }
       }
    }
    
    cout << "true";
    return;
}

int main(void)
{
    string str; cin >> str;
    check(str);

    return 0;
}