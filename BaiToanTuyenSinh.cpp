#include<bits/stdc++.h>
using namespace std;
struct ThiSinh
{
    string ma,ten;
    float toan,ly,hoa;
};
int main(){
    ThiSinh a;
    getline(cin,a.ma);
    getline(cin,a.ten);
    cin>>a.toan>>a.ly>>a.hoa;
    float sum=a.toan*2+a.ly+a.hoa;
    float ut;
    if(a.ma[2]=='1') ut=0.5;
    else if(a.ma[2]=='2') ut=1;
    else if(a.ma[2]=='3') ut=2.5;
    cout<<a.ma<<" "<<a.ten<<" ";
    
    printf("%g %g ",ut,sum);
    sum+=ut;
    if(sum>=24) cout<<"TRUNG TUYEN";
    else cout<<"TRUOT";
    return 0;
}