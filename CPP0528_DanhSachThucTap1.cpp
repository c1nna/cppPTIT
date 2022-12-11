#include<bits/stdc++.h>
using namespace std;
struct ThucTap
{
    int stt;
    string ma,ten,lop,mail,dn;
};
void nhap(ThucTap a[], int n){
    for (int i = 0; i < n; i++)
    {
        a[i].stt = i+1;
        getline(cin, a[i].ma);
        getline(cin, a[i].ten);
        getline(cin, a[i].lop);
        getline(cin, a[i].mail);
        getline(cin, a[i].dn);
    }
}
bool cmp(ThucTap a, ThucTap b){
    return a.ten < b.ten;
}
void sapxep(ThucTap a[], int n){
    sort(a, a+n, cmp);
}
void in(ThucTap a[], int n){
    string s; cin>>s;
    for (int i = 0; i < n; i++)
    {
        if(a[i].dn == s){
            cout<<a[i].stt<<" "<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<a[i].mail<<" "<<a[i].dn<<endl;
        }
    }
}
int main(){
    int n;cin>>n;
    cin.ignore();
    ThucTap a[50];
    nhap(a, n);
    sapxep(a,n);
    int q;cin>>q;
    while (q--)
    {
        in(a, n);
    }
    // string qDN;
    // for (int i = 0; i < q; i++)
    // {
    //     cin>>qDN;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if(a[i].dn.find(qDN) != string::npos){
    //         in(a[i]);
    //     }
    // }
    return 0;
}