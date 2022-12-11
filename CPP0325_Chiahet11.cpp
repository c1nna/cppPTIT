#include<bits/stdc++.h>
using namespace std;
void Solve(){
    string s;cin>>s;
    int res=0;
    for(auto x:s){
        res = res*10+(x-'0');
        res%=11;
    }
    cout<<(res==0)<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}