#include<bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string id,ten,gioi,sinh,diachi,thue,ki;
};
string STT(int i){
    string r = to_string(i);
    while (r.length()<5)
    {
        r='0'+r;
    }
    return r;
}
void nhap(NhanVien &a){
    scanf("\n");
    getline(cin,a.ten);
    getline(cin,a.gioi);
    getline(cin,a.sinh);
    getline(cin,a.diachi);
    getline(cin,a.thue);
    getline(cin,a.ki);
}
void inds(NhanVien ds[],int N){
    for (int i = 0; i < N; i++)
    {
        // cout<<STT(i+1)<<" ";
        string s = to_string(i+1);
        s = string(5 - s.size(), '0') + s;
        cout<<s<<" ";
        cout<< ds[i].ten << " " << ds[i].gioi << " " << ds[i].sinh << " " << ds[i].diachi << " " << ds[i].thue << " " << ds[i].ki << endl;
    } 
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}