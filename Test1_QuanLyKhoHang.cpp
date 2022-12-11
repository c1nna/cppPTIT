#include <bits/stdc++.h>
using namespace std;
struct MatHang
{
    string ma,ten,hang,donvi;
    int mua,ban;
};
string solve(string s){
    stringstream ss(s);
    string tmp, res = "";
    while (ss>>tmp)
    {
        res += toupper(tmp[0]);
    }
    return res;
}
bool cmp(MatHang a, MatHang b){
    int loi1 = a.ban - a.mua, loi2 = b.ban - b.mua;
    if(loi1 != loi2)    
        return loi1 > loi2;
    else 
        return a.ma < b.ma;
}
int main(){
    int n;cin>>n;
    vector<MatHang> v;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        string ten; getline(cin, ten);
        string hang; getline(cin, hang);
        string donvi; getline(cin, donvi);
        int mua,ban; cin>>mua>>ban;
        string ma = solve(ten);
        mp[ma]++;
        string tmp = to_string(mp[ma]);
        while(tmp.size() < 4) tmp = "0" + tmp;
        ma = ma + tmp;
        MatHang x{ma,ten,hang,donvi,mua,ban};
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it:v){
        cout<<it.ma<<" "<<it.ten<<" "<<it.hang<<" "<<it.donvi<<" "<<it.mua<<" "<<it.ban<<endl;
    }
    return 0;
}