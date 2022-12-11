#include<bits/stdc++.h>
using namespace std;
struct ThiSinh
{   
    string name,date;
    float d1,d2,d3;
};
void nhap(struct ThiSinh &A){
    getline(cin,A.name);
    cin>>A.date>>A.d1>>A.d2>>A.d3;
}
void in(ThiSinh A){
    cout<<A.name<<" "<<A.date<<" "<<fixed<<setprecision(1)<<A.d1+A.d2+A.d3;
}
int main(){
    ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}