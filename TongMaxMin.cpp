#include <bits/stdc++.h>
using namespace std;
long long minNum(string &s){
    int len=s.length()-1;
    long long res=0;
    for (int i = 0; i < len; i++)
    {
        if(s[i]=='6') res = res*10+5;
        else res = res*10+s[i]-'0';
    }
    return res;
}
long long maxNum(string &s){
    int len = s.length()-1;
    long long res = 0;
    for (int i = 0; i < len; i++)
    {
        if(s[i]=='5') res = res*10+6;
        else res = res*10+s[i]-'0';
    }
    return res;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        string a,b;
        cin>>a>>b;
        cout<<minNum(a)+minNum(b)<<' '<<maxNum(a)+maxNum(b)<<endl;
    }
    return 0;
}