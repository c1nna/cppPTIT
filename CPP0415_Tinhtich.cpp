#include<iostream>
#include<algorithm>
using namespace std;
void Solve(){
    int n,m;cin>>n>>m;
    long long a[n],b[m];
    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < m; i++) cin>>b[i];
    sort(a,a+n,greater<long long>());
    sort(b,b+n);
    cout<<a[0]*b[0]<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}