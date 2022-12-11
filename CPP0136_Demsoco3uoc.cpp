#include<iostream>
#include<math.h>
using namespace std;
const int N = 1e6+5;
int prime[N];
void Prime(){
    prime[0]=1;prime[1]=1;
    for (int i = 2; i <= sqrt(N); i++)
    {
        if(prime[i]==0){
            for (int j = i*i; j < N; j+=i)
            {
                prime[j]=1;
            }
        }
    }
}
void Solve(){
    long long n,count=0;
    cin>>n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(prime[i]==0) count++;
    }
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    Prime();
    while (t--)
    {
        Solve();
    }
    return 0;
}