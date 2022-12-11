#include<bits/stdc++.h>
using namespace std;
struct PhanSo
{
    long long a,b;
};
void nhap(PhanSo &p){
    cin>>p.a>>p.b;
}
void rutgon(PhanSo &p){
    long long g=__gcd(p.a,p.b);
    p.a/=g;
    p.b/=g;
}
PhanSo tong(PhanSo p,PhanSo q){
    PhanSo t;
    long long g = __gcd(p.b,q.b);
    long long l = p.b*q.b/g;
    t.a=l/p.b*p.a+l/q.b*q.a;
    t.b=l;
    rutgon(t);
    return t;
}
void in(PhanSo p){
    cout<<p.a<<"/"<<p.b;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}