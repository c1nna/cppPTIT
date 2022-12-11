#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(!b) return a;
    return gcd(b, a%b);
}
int main(){
    int N=100005;
    bool check[100007];
    for (int i = 2; i < N; i++)
        check[i] = 1;
    for(int i = 2; i < N; i++)
        if(check[i])
            for(int j = 2*i; j <= N; j+=i)
                check[j] = 0;
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int cnt = 0;
        for (int i = 1; i < n; i++)
            if(gcd(n,i) == 1) 
                cnt++;
        if(check[cnt]) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}