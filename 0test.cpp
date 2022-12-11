#include <bits/stdc++.h>
using namespace std;
// void date(string s){
//     int n = (s[0] - '0') * 10 + s[1] - '0', t = (s[3] - '0') * 10 + s[4] - '0', na = stoi(s.substr(6));
//     cout<<n<<" "<<t<<" "<<na; 
// }
string lower(string s){
    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
// void chuanHoa(string &str){
//     string s, res = "";
//     stringstream ss(str);
//     while(ss>>s){
//         res += toupper(s[0]);
//         for (int i = 1; i < s.length(); i++)
//         {
//             res += tolower(s[i]);
//         }
//         res += " ";
//     }
//     res.erase(res.length() - 1);
//     str = res;
//     cout<<str;
// }
void email(string s){
    vector<string> v;
    stringstream ss(s);
    string tmp, email = "";
    while (ss>>tmp)
    {
        v.push_back(tmp);
    }
    email += lower(v[v.size() - 1]);
    for (int i = 0; i < v.size() - 1; i++)
    {
        email += tolower(v[i][0]);
    }
    cout<<email<<endl;
}
int main(){
    string s;getline(cin,s);
    email(s);
    return 0;
}