#include<iostream>
#include<algorithm>
using namespace std;
void Solve(){
    int n,k;cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    for (int i = 0; i < k; i++)
    {
        cout<<a[i]<<" ";
    }
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