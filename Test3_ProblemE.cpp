#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string ma, ten, chuc, ns;
    int ngay, luong;
    long long thunhap;
};
bool cmp(NhanVien a, NhanVien b){
    return a.thunhap > b.thunhap;
}
string chucvu(string s){
    if(s == "GD") return "Giam doc";
    if(s == "NV") return "Nhan vien";
    if(s == "TP") return "Truong phong";
    return "Pho giam doc";
}
int phu(string s){
    if(s == "Giam doc") return 2000000;
    if(s == "Pho giam doc") return 1000000;
    if(s == "Truong phong") return 500000;
    return 200000;
}
int luongcung(int ngay, int luong){
    return ngay*luong;
}
int thuong(int ngay, int luong){
    if(ngay >= 27) return luong*0.2;
    if(ngay >= 25) return luong*0.1;
    return 0;
}
int main(){
    int n;cin>>n;
    vector<NhanVien> v;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        string ma; getline(cin, ma);
        string ten; getline(cin, ten);
        string ns; getline(cin, ns);
        if(ns[1] == '/'){
            ns = "0" + ns;
        }
        if(ns[4] == '/'){
            ns.insert(3,"0");
        }
        int ngay,luong; cin>>ngay>>luong;
        string chuc = chucvu(ma.substr(0,2));
        int lc = luongcung(ngay, luong);
        long long thunhap = luongcung(ngay, luong) + phu(chuc) + thuong(ngay, lc);
        NhanVien x{ma,ten,chuc,ns,ngay,luong,thunhap};
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it:v){
        cout<<it.ma<<" "<<it.ten<<" "<<it.chuc<<" "<<it.ns<<" "<<it.ngay<<" "<<it.luong<<" "<<it.thunhap<<endl;
    }
}
