#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string maSV="N20DCCN001",hoTen,lop,ngay;
    float gpa;
};
void nhapThongTinSV(SinhVien &a){
    getline(cin,a.hoTen);
    cin.ignore();
    getline(cin,a.lop);
    cin>>a.ngay>>a.gpa;
    if(a.ngay[1] == '/'){
        a.ngay = "0" + a.ngay;
    }
    if(a.ngay[4] == '/'){
        a.ngay.insert(3,"0");
    }
}
void inThongTinSV(SinhVien &a){
    cout<<a.maSV<<" "<<a.hoTen<<" "<<a.lop<<" "<<a.ngay<<" "<<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}