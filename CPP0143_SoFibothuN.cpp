#include<iostream>
#include<math.h>
using namespace std;
void Solve(){
    int n;
    cin>>n;
    long long a[n];
    a[0]=0;a[1]=1;
    for (int i = 2; i <= n; i++)
    {
        a[i]=(a[i-1]+a[i-2]);
    }
    cout<<a[n]<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}