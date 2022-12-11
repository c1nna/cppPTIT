#include<iostream>
#include<math.h>
using namespace std;
void Solve(){
    long long n;
    cin>>n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>1)cout<<n;
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