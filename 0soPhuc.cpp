#include<bits/stdc++.h>
using namespace std;
class SoPhuc{
    private:
        int thuc, ao;
    public:
        friend istream& operator >> (istream& in, SoPhuc &a);
        friend ostream& operator << (ostream& out, SoPhuc a);
        SoPhuc operator + (SoPhuc another);
        SoPhuc operator - (SoPhuc another); 
        bool operator == (SoPhuc another);
};
istream& operator >> (istream& in, SoPhuc &a){
    in>>a.thuc>>a.ao;
    return in;
}
ostream& operator << (ostream& out, SoPhuc a){
    out<<a.thuc<<" "<<a.ao;
    return out;
}
SoPhuc SoPhuc::operator + (SoPhuc another){
    SoPhuc tong;
    tong.thuc = this->thuc + another.thuc;
    tong.ao = this->ao + another.ao;
    return tong;
}
SoPhuc SoPhuc::operator - (SoPhuc another){
    SoPhuc tong;
    tong.thuc = this->thuc - another.thuc;
    tong.ao = this->ao - another.ao;
    return tong;
}
bool SoPhuc::operator == (SoPhuc another){
    return this->thuc == another.thuc && this->ao == another.ao;
}

int main(){
    SoPhuc a,b;cin>>a>>b;
    SoPhuc tong = a + b;
    SoPhuc hieu = a - b;
    cout<<tong<<endl;
    if(a==b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}