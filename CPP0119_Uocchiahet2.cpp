#include<iostream>
#include<math.h>
using namespace std;
void Solve(){
    int n,res;
    cin>>n;
    res=0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0){
            if(i%2==0) res++;
            if((n/i)%2==0 && i*i!=n) res++;
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