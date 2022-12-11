#include <bits/stdc++.h>
using namespace std;
struct Gamer
{
    string user,pass,ten,vao,ra;
};
int thoigian(string vao, string ra){
    int h1 = stoi(vao.substr(0,2)), h2 = stoi(ra.substr(0,2));
    int m1 = stoi(vao.substr(3)), m2 = stoi(ra.substr(3));
    return (h2 * 60 + m2) - (h1 * 60 + m1);
}
bool cmp(Gamer a, Gamer b){
    if(thoigian(a.vao, a.ra) != thoigian(b.vao, b.ra)) 
        return thoigian(a.vao, a.ra) > thoigian(b.vao, b.ra);
    else 
        return a.user < b.user; 
}
int main(){
    int n;cin>>n;
    vector<Gamer> v;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        string user; getline(cin,user);
        string pass; getline(cin,pass);
        string ten; getline(cin,ten);
        string vao; cin>>vao;
        string ra; cin>>ra;
        Gamer x{user,pass,ten,vao,ra};
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it:v){
        int phut = thoigian(it.vao, it.ra) % 60;
        int gio = thoigian(it.vao, it.ra) / 60;
        cout<<it.user<<" "<<it.pass<<" "<<it.ten<<" "<<gio<<" "<<"gio"<<" "<<phut<<" "<<"phut"<<endl;
    }
    return 0;
}