#include<bits/stdc++.h>
using namespace std;
struct PhanSo
{
    long long a,b,c,d;
};
void nhap(PhanSo &p){
    cin>>p.a>>p.b;
}
void rutgon(PhanSo &p){
    long long g = __gcd(p.a,p.b);
    p.c = p.a/g;
    p.d = p.b/g;
}
void in(PhanSo p){
    cout<<p.c<<"/"<<p.d;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}