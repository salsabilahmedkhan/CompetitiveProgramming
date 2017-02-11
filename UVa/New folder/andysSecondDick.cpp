#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    char a[10000];
    set< string > st;
    int i;
    while(gets(a)){
        if(!a[0]) continue;
        if(s!=""){
            s.erase(s.size()-1,1);
        }
        for(i=0;a[i];i++){
            if(a[i]>='A' && a[i]<='Z') a[i]+=32;
            if(isalpha(a[i])){
                if(i==strlen(a)-1){
                    s.push_back(a[i]);
                    st.insert(s);
                    s.clear();
                }
                else s.push_back(a[i]);
            }
            else if(i==0 && a[i]=='-'){
                st.insert(s);
                s.clear();
            }
            else if(a[i]=='-' && isalpha(a[i-1]) && isalpha(a[i+1])){
                s.push_back(a[i]);
            }
            else if((i==strlen(a)-1) && a[i]=='-' && isalpha(a[i-1])){
                s.push_back(a[i]);
            }
            else{
                st.insert(s);
                s.clear();
            }
        }
    }
    if(s!=""){
        s.erase(s.size()-1,1);
        st.insert(s);
        s.clear();
    }
    //cout<<s<<endl;
    set< string > :: iterator it;
    for(it=st.begin();it!=st.end();it++){
        if(*it!="") cout<<*it<<endl;
    }
    return 0;
}
