#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        long long x;
        vector<long long> v;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            if(x) v.push_back(x);
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        int cnt = n-v.size();
        while(cnt--) cout<<0<<" ";
        cout<<endl;
    }
    return 0;
}