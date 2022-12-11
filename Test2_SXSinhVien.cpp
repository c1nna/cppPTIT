#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ma,ten,lop,ns;
    float gpa;
};
bool cmp(SinhVien a, SinhVien b){
    if(a.gpa != b.gpa) 
        return a.gpa > b.gpa;
    else 
        return a.ma < b.ma;
}
string chuanHoa(string s){
    stringstream ss(s);
    string tmp, res = "";
    while(ss>>tmp){
        res += toupper(tmp[0]);
        for (int i = 1; i < tmp.length(); i++)
        {
            res += tolower(tmp[i]);
        }
        res += " ";
    }
    res.erase(res.length() - 1);
    return res;
}
int main(){
    int n;cin>>n;
    vector<SinhVien> v;
    for (int i = 0; i < n; i++)
    {
        string ma = to_string(i + 1);
        ma = "SV"+ string(3 - ma.size(), '0') + ma;
        cin.ignore();
        string ten; getline(cin, ten);
        string lop; getline(cin, lop);
        string ns; getline(cin, ns);
        float gpa; cin>>gpa;
        if(ns[1] == '/'){
            ns = "0" + ns;
        }
        if(ns[4] == '/'){
            ns.insert(3,"0");
        }
        SinhVien x{ma,ten,lop,ns,gpa};
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it:v){
        cout<<it.ma<<" "<<chuanHoa(it.ten)<<" "<<it.lop<<" "<<it.ns<<" "<<fixed<<setprecision(2)<<it.gpa<<endl;
    }
}
