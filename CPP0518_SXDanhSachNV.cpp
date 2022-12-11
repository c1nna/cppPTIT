#include<bits/stdc++.h>
using namespace std;
// int stt=1;
// struct NhanVien
// {
//     string ma,ten,gioi,diachi,thue,ngay;
//     int d,m,y;
// };
// string STT(int i){
//     string r=to_string(i);
//     if(i<10) r = "0000"+r;
//     else r="000"+r;
//     return r;
// }
// bool cmp(NhanVien A, NhanVien B){
//     if(A.y<B.y) return 1;
//     if(A.y==B.y){
//         if(A.m<B.m) return 1;
//         if(A.m==B.m){
//             if(A.d<B.d) return 1;
//         }
//     }
//     return 0;
// }
// void nhap(NhanVien &A){
//     A.ma=STT(stt); stt++;
//     scanf("\n");
//     getline(cin,A.ten);
//     getline(cin,A.gioi);
//     scanf("%d/%d/%d\n", &A.m, &A.d, &A.y);
//     getline(cin,A.diachi);
//     getline(cin,A.thue);
//     getline(cin,A.ngay);
// }
// void sapxep(NhanVien ds[],int N){
//     sort(ds,ds+N,cmp);
// }
// void inds(NhanVien ds[],int N){
//     for (int i = 0; i < N; i++)
//     {
//         cout<<ds[i].ma<<" "<<ds[i].ten<<" "<<ds[i].gioi<<" ";
//         printf("%.2d/%.2d/%.4d ",ds[i].m, ds[i].d, ds[i].y);
//         cout<<ds[i].diachi<<" "<<ds[i].thue<<" "<<ds[i].ngay<<endl; 
//     } 
// }

struct NhanVien
{

    string ma,ten,gt,ns,dc,thue,hd;
};
void nhap(NhanVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        string s = to_string(i+1);
        s = string(5 - s.size(), '0') + s;
        a[i].ma = s;
        scanf("\n");
        getline(cin, a[i].ten);
        cin>>a[i].gt;
        cin>>a[i].ns;
        scanf("\n");
        getline(cin, a[i].dc);
        cin>>a[i].thue>>a[i].hd;
    }
}
bool cmp(NhanVien a, NhanVien b){
    string s = a.ns, t = b.ns;
    int n1 = (s[0] - '0') * 10 + (s[1] - '0'), t1 = (s[3] - '0') * 10 + s[4] - '0', na1 = stoi(s.substr(6));
    int n2 = (t[0] - '0') * 10 + t[1] - '0', t2 = (t[3] - '0') * 10 + t[4] - '0', na2 = stoi(t.substr(6));
    if(na1 != na2) return na1 < na2;
    if(t1 != t2) return t1 < t2;
    return n1 < n2;  
}
void sapxep(NhanVien a[], int n){
    sort(a, a+n, cmp);
}
void inds(NhanVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].gt<<" "<<a[i].ns<<" "<<a[i].dc<<" "<<a[i].thue<<" "<<a[i].hd<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}