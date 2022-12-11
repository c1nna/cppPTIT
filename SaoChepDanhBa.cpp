#include <bits/stdc++.h>
using namespace std;
struct Dat
{
    string firstName, lastName, phoneNumber, date;
};
bool cmp(Dat &a, Dat &b){
    if(a.lastName > b.lastName) return 0;
    if(a.lastName < b.lastName) return 1;
    if(a.firstName > b.firstName) return 0;
    if(a.firstName < b.firstName) return 1;
}
int main(){
    ifstream fin("SOTAY.txt");
    ofstream fout("DIENTHOAI.txt");
    string s;
    unordered_map<int, string> m;
    Dat a[10005];
    int idx = 0;
    int i = 0;
    string date;
    while (getline(fin ,s))
    {
        string tmp = s.substr(0, 4);
        if(tmp == "Ngay"){
            ++i;
            date = s.substr(5, s.size()-5);
            m[i] = date;
        }else{
            string tmp;
            getline(fin, tmp);
            vector<string> v;
            string fName = "";
            string s1;
            stringstream ss(s);
            while(ss >> s1) v.push_back(s1);
            a[idx].lastName = v[v.size()-1];
            for (int i = 0; i < v.size() - 1; i++) fName += v[i] + " ";
            a[idx].firstName = fName;
            a[idx].phoneNumber = tmp;
            a[idx].date = m[i];
            ++idx;
        }
    }
    sort(a, a + idx, cmp);
    for (int i = 0; i < idx; i++) fout<< a[i].firstName << a[i].lastName << ": "<< a[i].phoneNumber<< ' ' << a[i].date <<endl;
    return 0;
}