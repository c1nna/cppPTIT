#include <bits/stdc++.h>
using namespace std;
set<string> convert(string s){
    stringstream ss(s);
    set<string> se;
    string tmp;
    while(ss>>tmp){
        se.insert(tmp);
    }
    return se;
}
int main(){
    string s,t;
    getline(cin, s);
    getline(cin, t);
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < t.size(); i++)
    {
        t[i] = tolower(t[i]);
    }
    set<string> se1 = convert(s);
    set<string> se2 = convert(t);
    for(string x:se1){
        if(se2.find(x) == se2.end())
            cout<<x<<" ";
    }
    return 0;
}