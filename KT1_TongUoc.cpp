#include<iostream>
#include<math.h>
using namespace std;
void Solve(){
    long long n;
    long long res=1;
    cin>>n;
    if(n>1) res+=n;
    for (long long i = 2; i<=sqrt(n); i++)
    {
        if(n%i==0){
            res+=i;
            long long d = n/i;
            if(d!=i) res+=d;
        }
    }
    cout<<res<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}