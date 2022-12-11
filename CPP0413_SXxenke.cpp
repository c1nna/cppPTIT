#include<iostream>
#include<algorithm>
using namespace std;
void Solve(){
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) cin>>a[i];
    sort(a,a+n);
    int b=0,e=n-1;
    while(b<e)
    {
        cout<<a[e]<<' '<<a[b]<<' ';
        b++;e--;
    }
    if(b==e) cout<<a[b];
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}