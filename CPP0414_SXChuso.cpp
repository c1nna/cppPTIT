#include<iostream>
#include<algorithm>
using namespace std;
void Solve(){
    int n;cin>>n;
    string s="",temp="";
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        s+=temp;
    }
    int l = s.length();
    int a[l];
    for (int i = 0; i < s.length(); i++) a[i]=s[i]-'0';
    sort(a,a+l);
    for (int i = 0; i < s.length(); i++)
        if(a[i]!=a[i+1]) cout<<a[i]<<' ';
    cout<<endl;
    
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}