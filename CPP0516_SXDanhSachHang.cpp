#include<bits/stdc++.h>
using namespace std;
// struct MatHang
// {   
//     int id;
//     string ten,nhom;
//     float mua,ban,loi;
//     void nhap(){
//         scanf("\n");
//         getline(cin,ten);
//         getline(cin,nhom);
//         cin>>mua>>ban;
//         loi = ban-mua;
//     }
//     void in(){
//         cout<<id<<" "<<ten<<" "<<nhom<<" ";
//         cout<<fixed<<setprecision(2)<<loi<<endl;
//     }
// };
// bool cmp(MatHang A, MatHang B){
//     return A.loi>B.loi;
// }
// int main(){
//     int t;cin>>t;
//     MatHang A[t];
//     for (int i = 0; i < t; i++)
//     {
//         A[i].id=i+1;
//         A[i].nhap();
//     }
//     sort(A,A+t,cmp);
//     for (int i = 0; i < t; i++)
//     {
//         A[i].in();
//     }
//     return 0;
//}
struct MatHang
{
    int ma;
    string ten, nhom;
    double mua, ban;
};
// void nhap(MatHang a[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         a[i].ma = i + 1;
//         cin.ignore();
//         getline(cin, a[i].ten);
//         getline(cin, a[i].nhom);
//         cin>>a[i].mua>>a[i].ban;
//     }
// }
// double loi(MatHang a){
//     return (a.ban - a.mua);
// }
// bool cmp(MatHang a, MatHang b){
//     return loi(a) > loi(b);
// }
// void sapxep(MatHang a[], int n){
//     sort(a, a+n, cmp);
// }
// void in(MatHang a[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].nhom<<" "<<fixed<<setprecision(2)<<loi(a[i])<<endl;
//     }
// } 
// int main(){
//     struct MatHang ds[50];
//     int N;
//     cin >> N;
//     nhap(ds, N);
//     sapxep(ds,N);
//     in(ds, N);
//     return 0;
// }
double loi(MatHang a){
    return (a.ban - a.mua);
}
bool cmp(MatHang a, MatHang b){
    return loi(a) > loi(b);
}
int main(){
    int n;cin>>n;
    vector<MatHang> v;
    for (int i = 0; i < n; i++)
    {
        int ma = i + 1;
        cin.ignore();
        string ten; getline(cin, ten);
        string nhom; getline(cin, nhom);
        double mua, ban;cin>>mua>>ban;
        MatHang x{ma,ten,nhom,mua,ban};
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it:v){
        cout<<it.ma<<" "<<it.ten<<" "<<it.nhom<<" "<<fixed<<setprecision(2)<<(it.ban-it.mua)<<endl;
    }
}