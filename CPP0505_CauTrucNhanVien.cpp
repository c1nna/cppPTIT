#include<bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string maNV="00001";
    string maThue;
    string name,sex,dOB,adr,date;
};
void nhap(NhanVien &a){
    getline(cin,a.name);
    cin>>a.sex>>a.dOB;
    cin.ignore();
    getline(cin,a.adr);
    cin>>a.maThue>>a.date;
}
void in(NhanVien a){
    cout<<a.maNV<<" "<<a.name<<" "<<a.sex<<" "<<a.dOB<<" "<<a.adr<<" "<<a.maThue<<" "<<a.date;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}