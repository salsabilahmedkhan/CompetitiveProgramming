#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    char a[10000];
    map< int,int > m;
    int i,max=-1;
    while(gets(a)){
        m.clear();
        if(!a[0]) continue;
        if(s!=""){
            s.erase(s.size()-1,1);
        }
        for(i=0;a[i];i++){
            if(isalpha(a[i])){
                if(i==strlen(a)-1){
                    s.push_back(a[i]);
                    m[s.size()]++;
                    s.clear();
                }
                else s.push_back(a[i]);
            }
            else if(i==0 && a[i]=='-'){
                m[s.size()]++;
                s.clear();
            }
            else if((a[i]=='-' || a[i]==39) && isalpha(a[i-1]) && isalpha(a[i+1])){
                continue;
            }
            else if((i==strlen(a)-1) && a[i]=='-' && isalpha(a[i-1])){
                s.push_back(a[i]);
            }
            else{
                m[s.size()]++;
                s.clear();
            }
        }
        while(gets(a)){
            if(a[0]=='#' && a[1]==NULL) break;
            if(!a[0]) continue;
            if(s!=""){
                s.erase(s.size()-1,1);
            }
            for(i=0;a[i];i++){
                if(isalpha(a[i])){
                    if(i==strlen(a)-1){
                        s.push_back(a[i]);
                        m[s.size()]++;
                        s.clear();
                    }
                    else s.push_back(a[i]);
                }
                else if(i==0 && a[i]=='-'){
                    m[s.size()]++;
                    s.clear();
                }
                else if((a[i]=='-' || a[i]==39) && isalpha(a[i-1]) && isalpha(a[i+1])){
                    continue;
                }
                else if((i==strlen(a)-1) && a[i]=='-' && isalpha(a[i-1])){
                    s.push_back(a[i]);
                }
                else{
                    m[s.size()]++;
                    s.clear();
                }
            }
        }
        if(s!=""){
            s.erase(s.size()-1,1);
            m[s.size()]++;
            s.clear();
        }
        for(i=1;i<=81;i++){
            if(m[i]>0) cout<<i<<" "<<m[i]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
