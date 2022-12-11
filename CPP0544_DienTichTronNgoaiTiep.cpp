#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
struct ToaDo
{
    double x,y;
    void nhap(){
        cin>>x>>y;
    }
};
bool tamGiac(ToaDo A, ToaDo B, ToaDo C){
    if((A.x-B.x)*(A.y-C.y)==(A.x-C.x)*(A.y-B.y)) return 0;
    return 1;
}
double doDai(ToaDo A, ToaDo B){
    double d = sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
    return d;
}
void Solve(){
    ToaDo A,B,C;
    A.nhap();
    B.nhap();
    C.nhap();
    if(!tamGiac(A,B,C)){
        cout<<"INVALID"<<endl;
        return;
    }
    double c = doDai(A,B);
    double b = doDai(A,C);
    double a = doDai(B,C);
    double S1 = 0.25*sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a));
    double R = a*b*c/(4*S1);
    double S2 = R*R*PI;
    cout<< fixed << setprecision(3) <<S2<<endl;  
}
int main() {
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}