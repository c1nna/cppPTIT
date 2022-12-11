#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void Solve(){
    string s;cin>>s;
    int k;cin>>k;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z') s[i]=s[i]-' ';
    }
    sort(s.begin(),s.end());
    int count=1;
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i]!=s[i-1]) count++;
    }
    if(count+k>=26) cout<<1<<endl;
    else cout<<0<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
    
}