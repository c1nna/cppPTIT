#include<bits/stdc++.h>
using namespace std;
class SinhVien{
public:
    string ma,ten,lop;
    int d,m,y;
    float gpa;

public:
void SinhVien::nhap(){
    a.ma="B20DCCN001";
    getline(cin,a.ten);
    cin>>a.lop;
    scanf("%d/%d/%d\n", &a.d, &a.m, &a.y);    
    cin>>a.gpa;
}
void SinhVien::xuat(){
    cout<<a.ma<<" "<<a.ten<<" "<<a.lop<<" ";
    printf("%.2d/%.2d/%.4d ",a.d, a.m, a.y);
    cout<<fixed<<setprecision(2)<<a.gpa;
}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
