#include<iostream>
#include<math.h>
using namespace std;
void Solve(){
    int m,n,a,b,res=0;
    cin>>m>>n>>a>>b;
    for (int i = m; i <= n; i++)
    {
        if (i%a==0||i%b ==0)
        {
            res++;
        }
    }
    cout<<res<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}