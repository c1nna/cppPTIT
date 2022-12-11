#include<bits/stdc++.h>
using namespace std;
int n,k,stop=0;
void KhoiTao(int a[]){
    for (int i = 1; i < n; i++)
        a[i]=i;
}
void In(int a[]){
    for(int i = 1; i < k ; i++)
        cout<<a[i];
    cout<<' ';
}
void Sinh(int a[]){
    int i = k;
    while (i > 0 && a[i] == n-k+i) --i;
    if(!i) stop = 1;
    else ++a[i];
    int p = a[i];
    while (i<=k) a[i++] = p++;
}
void ToHop(int a[]){
    while (!stop)
    {
        In(a);
        Sinh(a);
    }
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        int a[25];
        stop = 0;
        cin>>n>>k;
        KhoiTao(a);
        ToHop(a);
        cout<<endl;
    }
    return 0;
}