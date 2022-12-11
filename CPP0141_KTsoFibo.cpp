#include<iostream>
using namespace std;
const long long mod = 1e9+7;
void Solve(){
    long long n;cin>>n;
    long long f0=0,f1=1,fn=1;
    while(f0+f1<=n){
        fn=f0+f1;
        f0=f1;
        f1=fn;
    }
    if(fn==n||n==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}