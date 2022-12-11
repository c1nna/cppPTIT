#include<bits/stdc++.h>
using namespace std;
bool check(string &s){
    int i=0;
    string fi="",se="";
    for(;i<s.size();i++){
        if(isblank(s[i])) return 0;
        if(s[i]=='@') break;
        if(!isalnum(s[i]) && s[i]!='.' && s[i]!='_') return 0;
        fi += s[i];
        if(fi.size()>64) return 0;
    }    
    if(!fi.size()) return 0;
    ++i;
    int checkDots = 0;
    for(;i<s.size();i++){
        if(isblank(s[i])) return 0;
        if(!isalnum(s[i]) && s[i]!='.' && s[i]!='_') return 0;
        if(s[i]=='.') checkDots++;
        se +=s[i];
        se += s[i];
        if(se.size()>64) return 0;
    }
    if(checkDots ==1 && se.size() && se[se.size()-1]=='.') return 0;
    return se.size()&&checkDots;
}
int main(){
    int t;cin>>t;
    scanf("\n");
    while (t--)
    {
        string s;
        getline(cin,s);
        if(check(s)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
}