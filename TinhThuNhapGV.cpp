#include <bits/stdc++.h>
using namespace std;
struct GiaoVien{
    string ma,ten;
    long long luong,phu;
    int lv;
};
int lv(GiaoVien a){
    int res=0;
    res=res*10+a.ma[2]-'0';
    res=res*10+a.ma[3]-'0';
    return res;
}
long long phu(GiaoVien a){
    if(a.ma[1]=='T') return 2000000;
    if(a.ma[0]=='G') return 500000;
    return 900000;
}
int main(){
    GiaoVien a;
    getline(cin,a.ma);
    getline(cin,a.ten);
    cin>>a.luong;
    a.lv=lv(a);
    a.phu=phu(a);
    cout<<a.ma<<" "<<a.ten<<" "<<a.lv<<" "<<a.phu<<" "<<a.luong*a.lv+a.phu;
    return 0;
}