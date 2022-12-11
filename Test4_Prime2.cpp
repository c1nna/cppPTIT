#include <bits/stdc++.h>
using namespace std;
const int maxn = (int) 1e6;
int prime[maxn + 1];
void sangNT(){
    for (int i = 0; i <= maxn; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(maxn); i++)
    {
        if(prime[i]){
            for (int j = i * i; j <= maxn; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int F[1000001];
int main(){
    sangNT();
    F[0] = 0;
    F[1] = 0;
    int dem = 0;
    for (int i = 2; i <= 1000000; i++)
    {
        if(prime[i]) ++dem;
        F[i] = dem;
    }
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        int l,r;cin>>l>>r;
        if(l == 0) cout<<F[r]<<endl;
        else cout<<F[r] - F[l - 1]<<endl;
    }
    return 0;
}