#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int,int> a[n];
    for(auto &i:a){
        cin>>i.first>>i.second;
    }
    sort(a,a+n);
    int ans=0;
    for(auto i:a){
        if(ans<=i.first) ans=i.first+i.second;
        else ans+=i.second;
    }
    cout<<ans;
    return 0;
}