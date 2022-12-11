#include<bits/stdc++.h>
using namespace std;
map<string, string> myMap;
class MonHoc{
    public:
        string ma,ten;
        MonHoc(){
            this -> ma="";
            this -> ten="";
        }
        friend istream &operator >>(istream &is, MonHoc &a){
            getline(is,a.ma);
            getline(is,a.ten);
            myMap[a.ma] = a.ten;
            return is;
        }
};
int i=1;
int cv(string &s){
    int res=0;
    for(int i:s) res=res*10+(i-'0');
    return res;
}
class LichThi{
    public:
        string stt,ma,ten,date,time,nhom;
        int ngay, thang, nam, gio, phut;
        friend istream &operator >>(istream &is, LichThi &a){
            string x="T0";
            if(i<10) x+='0';
            x+=to_string(i);
            a.stt=x;
            string s1,s2;
            getline(is, s1);
            stringstream ss(s1);
            ss>>a.ma>>a.date>>a.time>>a.nhom;
            a.ten=myMap[a.ma];
            stringstream ss1(a.date);
            getline(ss1,s2,'/');
            a.ngay=cv(s2);
            getline(ss1,s2,'/');
            a.thang=cv(s2);
            getline(ss1,s2,'/');
            a.nam=cv(s2);
            stringstream ss2(a.time);
            getline(ss2,s2,':');
            a.gio=cv(s2);
            getline(ss2,s2,':');
            a.phut=cv(s2);
            ++i;
            return is;
        }
        friend ostream &operator <<(ostream &os, LichThi &a){
            cout << a.stt << ' ' << a.ma << ' ' << a.ten << ' ' << a.date << ' ' << a.time << ' ' << a.nhom << endl;
            return os;
        }
};
bool cmp(LichThi &a,LichThi &b){
    if(a.nam>b.nam) return 0;
    if(a.nam<b.nam) return 1;
    if(a.thang>b.thang) return 0;
    if(a.thang<b.thang) return 1;
    if(a.ngay>b.ngay) return 0;
    if(a.ngay<b.ngay) return 1;
    if(a.gio>b.gio) return 0;
    if(a.gio<b.gio) return 1;
    if(a.phut>b.phut) return 0;
    if(a.phut<b.phut) return 1;
    if(a.ma>b.ma) return 0;
    if(a.ma<b.ma) return 1;
    return 0;
}
void process(MonHoc mh[],int n,LichThi a[],int m){
    sort(a,a+m,cmp);
}
int main() {
 int n, m;
 cin >> n >> m;
 cin.ignore();
 MonHoc mh[100];
 LichThi lt[1000];
 for (int i = 0; i < n; i++) {
 cin >> mh[i];
 }
 for (int i = 0; i < m; i++) {
 cin >> lt[i];
 }
 process(mh, n, lt, m);
 for (int i = 0; i < m; i++) {
 cout << lt[i];
 }
}