#include<iostream>
#include<algorithm>
using namespace std;
void Solve(){
    int n,count=0;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) cin>>a[i];
    sort(a,a+n);
    for (int i = 1; i < n; i++)
        if(a[i]!=a[i-1]){
            count++;
        }
    cout<<a[n-1]-a[0]-count<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}