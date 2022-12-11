#include<bits/stdc++.h>
using namespace std;
char So(char c){
    if(c>='A' && c<='C') return '2';
    if(c>='D' && c<='F') return '3';
    if(c>='G' && c<='I') return '4';
    if(c>='J' && c<='L') return '5';
    if(c>='M' && c<='O') return '6';
    if(c>='P' && c<='S') return '7';
    if(c>='T' && c<='V') return '8';
    if(c>='W' && c<='Z') return '9';
}
void solve(){
    string s;cin>>s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    string str = "";
    for(auto x:s){
        str.push_back(So(x));
    }
    string x = str;
    reverse(str.begin(),str.end());
    if(str == x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}