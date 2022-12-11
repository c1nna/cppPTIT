#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<bool> a(10000007, 0);
        for (int i = 0; i < n; i++)
        {
            long long tmp;
            cin>>tmp;
            if(tmp>=0 && tmp<=10000001) a[tmp]=1;
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]) cout<<i<<' ';
            else cout<<-1<<' ';
        }
        cout<<endl;
    }
    return 0;
}