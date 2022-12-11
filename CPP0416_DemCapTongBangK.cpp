#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans+=mp[k - a[i]];
            if(a[i] * 2 == k){
                --ans;
            }
        }
        cout<<ans/2<<endl;
    }
    return 0;
}