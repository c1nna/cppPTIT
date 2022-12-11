#include<iostream>
#include<math.h>
using namespace std;
void Solve(){
    int res=0;
    long long n;
    cin>>n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while(n%i==0){
            n/=i;
            res=i;
        }
    }
    if(n>1)cout<<n;
    else cout<<res;
    cout<<endl;
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