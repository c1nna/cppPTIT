#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    map<int, int> ma;
    int res = -1,stop = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;cin>>x;
        ma[x]++;
        if(ma[x] == 2 && !stop){
            res = x;
            stop = 1;
        }
    }
    cout<<res<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}