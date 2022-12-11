#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string msv, ten, dc;
    double gpa;
    SinhVien(){}
    SinhVien(string ma, string name, double diem, string diachi){
        msv = ma;
        ten = name;
        gpa = diem;
        dc = diachi;
    }
    void in(){
        cout<<msv<<" "<<ten<<" "<<fixed<<setprecision(2)<<gpa<<" "<<dc<<endl;
    }
    void nhap(){
        cin>>msv;
        cin.ignore();
        getline(cin,ten);
        cin>>gpa;
        cin.ignore();
        getline(cin,dc);
    }
    bool operator < (SinhVien other){
        return gpa < other.gpa;
    }
};
struct SoPhuc
{
    int a, b;
    //kieu_tra_ve operator(ds thamso){}
    // SoPhuc operator + (const SoPhuc other){
    //     SoPhuc tong;
    //     tong.a = a + other.a;
    //     tong.b = b + other.b;
    //     return tong; 
    // }
    friend SoPhuc operator + (const SoPhuc x, const SoPhuc y){
        SoPhuc tong;
        tong.a = x.a+y.a;
        tong.b = x.b+y.b;
        return tong;
    }
    //insertion
    friend istream& operator >> (istream& in, SoPhuc &x ){
        in>>x.a>>x.b;
        return in;
    }
    //extraction
    friend ostream& operator << (ostream& out, SoPhuc x){
        out<<x.a<<" "<<x.b;
        return out;
    }
    // bool operator == (const SoPhuc other){
    //     return a == other.a && b == other.b;
    // }
    friend bool operator == (SoPhuc x, SoPhuc y){
        return x.a == y.a && x.b == y.b;
    }
};

int main(){
    // SinhVien x("123","nguye van a",3.2,"ha noi");
    // x.in();
    // SoPhuc a, b;
    // cin>>a>>b;
    // SoPhuc c = a + b;
    // cout<<c<<endl;
    // if(a == b) cout<<"Yes";
    // else cout<<"No";
    int n;cin>>n;
    SinhVien ds[n];
    for (int i = 0; i < n; i++)
    {
        ds[i].nhap();
    }
    sort(ds, ds+n);
    for(SinhVien x:ds){
        x.in();
    }
    return 0;
}