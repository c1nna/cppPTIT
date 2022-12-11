#include<bits/stdc++.h>
using namespace std;    
struct NhanVien{
    string ten,chuc;
    long long coban,ngay,luong,thuong,phu,thu;
};
void nhap(NhanVien &a){
    getline(cin,a.ten);
    cin>>a.coban>>a.ngay>>a.chuc;
}
void tinh(NhanVien &a){
    a.luong=a.coban*a.ngay;
    if(a.ngay>=25) a.thuong=a.luong*0.2;
    else if(a.ngay>=22 && a.ngay<25) a.thuong=a.luong*0.1;
    else if(a.ngay<22) a.thuong=0;
    if(a.chuc=="GD") a.phu=250000;
    if(a.chuc=="PGD") a.phu=200000;
    if(a.chuc=="TP") a.phu=180000;
    if(a.chuc=="NV") a.phu=150000;
    a.thu=a.luong+a.thuong+a.phu;
}
void xuat(NhanVien a){
    cout<<"NV01 "<<a.ten<<" "<<a.luong<<" "<<a.thuong<<" "<<a.phu<<" "<<a.thu<<endl;
}
int main(){
    struct NhanVien a;
    nhap(a);
    tinh(a);
    xuat(a);
    return 0;
}