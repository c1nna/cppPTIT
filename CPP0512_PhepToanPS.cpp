#include<bits/stdc++.h>
using namespace std;
struct PhanSo
{
    long long tu,mau;
};

void rutgon(PhanSo &p){
    long long g=__gcd(p.tu,p.mau);
    p.tu/=g;
    p.mau/=g;
}
PhanSo sum(PhanSo A,PhanSo B){
    PhanSo C;
    long long g = __gcd(A.mau,B.mau);
    long long l = A.mau*B.mau/g;
    C.tu=(l/A.mau*A.tu+l/B.mau*B.tu)*(l/A.mau*A.tu+l/B.mau*B.tu);
    C.mau=l*l;
    rutgon(C);
    return C;
}
PhanSo multi(PhanSo A,PhanSo B,PhanSo C){
    PhanSo D;
    D.tu=A.tu*B.tu*C.tu;
    D.mau=A.mau*B.mau*C.mau;
    rutgon(D);
    return D;
}
void process(PhanSo A, PhanSo B){
    PhanSo C =sum(A,B);
    PhanSo D =multi(A,B,C);
    cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}