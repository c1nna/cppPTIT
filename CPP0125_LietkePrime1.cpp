#include<iostream>
#include<math.h>
using namespace std;
long long prime(long long n){
    if(n<2) return 0;
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b) swap(a,b);
    for(long long i=a;i<=b;i++){
        if(prime(i)==1) cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}