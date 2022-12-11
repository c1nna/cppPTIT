#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        cin.ignore();
        string s;
        getline(cin, s);
        int n;cin>>n;
        long long ans = 0;
        long long x;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            if(x<0) ans+=abs(x);
        }
        if(ans>=100000000) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}