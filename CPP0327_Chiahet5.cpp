#include<bits/stdc++.h>
using namespace std;
void Solve(){
    string s;cin>>s;
    long long n=0;
    for(auto x:s){
        n = n*2+(x-'0');
        n%=5;
    }
    if (n == 0) cout << "Yes\n";
    else cout << "No\n";
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}