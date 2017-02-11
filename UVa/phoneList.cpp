#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
#include <cstdlib>

using namespace std;

vector <string> v;
char a[50];
bool isConsistent;

struct node
{
    bool endmark;
    node* next[30];

    node()
    {
        endmark=false;
        for(int i=0;i<10;i++)
            next[i]=NULL;
    }
};

node *root;

void insert_phone(char* str,int len)
{

    node* current=root;
    for(int i=0;i<len;i++)
    {
        int id=str[i]-'0';
        if(!current->next[id])
            current->next[id]=new node();
        current=current->next[id];
        //cout<<"?"<<endl;
    }
    current->endmark=true;
}

void check(string str,int len)
{
    node* current=root;
    for(int i=0;i<len-1;i++)
    {
        int id=str[i]-'0';
        current=current->next[id];
        if(current->endmark==true)
            isConsistent=false;
    }
}

int main()
{
    int t,n;

    scanf("%d",&t);
    while(t--)
    {
        root=new node();
        isConsistent=true;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%s",a);
            v.push_back(a);
            int len=strlen(a);
            insert_phone(a,len);
        }

        for(int i=0;i<n;i++)
        {
            int length=v[i].size();
            check(v[i],length);
        }

        if(isConsistent)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        v.clear();
        delete(root);
    }

    return 0;
}
