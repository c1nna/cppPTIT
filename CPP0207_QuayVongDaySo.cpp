#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n,d;cin>>n>>d;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout<<a[(i+d) % n]<<" ";
        }
        cout<<endl;
    }
    return 0;
}