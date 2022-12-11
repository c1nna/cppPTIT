#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ma,ten,lop;
    float d1,d2,d3;
};
void nhap(SinhVien &a){
    cin.ignore();
    getline(cin, a.ma);
    getline(cin, a.ten);
    getline(cin, a.lop);
    cin >> a.d1 >> a.d2 >> a.d3; 
}
vector<string> chuanHoa(string name){
    stringstream ss(name);
    vector<string> v;
    string token;
    while(ss>>token){
        v.push_back(token);
    }
    return v;
}
bool cmp(SinhVien a, SinhVien b){
    // vector<string> v1 = chuanHoa(a.ten), v2 = chuanHoa(b.ten);
    // if(v1.back() != v2.back())
    //     return v1.back() < v2.back();
    // int len1 = v1.size(), len2 = v2.size();
    // for (int i = 0; i < min(len1, len2); i++)
    // {
    //     if(v1[i] != v2[i])
    //         return v1[i] < v2[i];
    // }
    // return len1 < len2;
    return a.ten < b.ten;
}
void sap_xep(SinhVien a[], int n){
    sort(a, a+n, cmp);
}
void in_ds(SinhVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<" "<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<fixed<<setprecision(1)<<a[i].d1<<" "<<a[i].d2<<" "<<a[i].d3<<endl;
    }
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++)
    	nhap(ds[i]);
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}