#include<iostream>
#include<math.h>
using namespace std;
void Solve(){
    int n,k,count=0,a[10000];
    cin>>n>>k;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while(n%i==0){
            a[count++]=i;
            n/=i;
        }
    }
    if(n>1) a[count++]=n;
    if(k>count) cout<<-1<<endl;
    else cout<<a[k-1]<<endl;
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