#include <bits/stdc++.h>
using namespace std;
const int maxn = (int) 1e7;
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
bool check(int n){
    int last = n % 10;
    while (n)
    {
        if(n % 10 > last)
            return false;
        n /= 10;
    }   
    return true;
}
int main(){
    sangNT();
    int n;cin>>n;
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if(prime[i] && check(i)){
            ++dem;
            cout<<i<<' ';
        }
    }
    cout<<endl<<dem<<endl;
}