#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string MaSV="B20DCCN001",hoTen,lop,date;    
    float gpa;
};
void nhap(SinhVien &a){
    getline(cin,a.hoTen);
    cin>>a.lop>>a.date>>a.gpa;
    if(a.date[1] == '/'){
        a.date = "0" + a.date;
    }
    if(a.date[4] == '/'){
        a.date.insert(3,"0");
    }
}
void in(SinhVien &a){
    cout<<a.MaSV<<" "<<a.hoTen<<" "<<a.lop<<" "<<a.date<<" "<<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}