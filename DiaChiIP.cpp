#include<bits/stdc++.h>
using namespace std;
bool check(vector<string> &v){
    if(v.size()!=4) return 0;
    for(string i:v){
        long long tmp=0;
        for(char j:i){
            if(!isdigit(j)) return 0;
            tmp = tmp*10+j-'0';
        }
        if(tmp<0||tmp>255) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        vector<string> v;
        stringstream ss(s);
        while(getline(ss,s,'.')) v.push_back(s);
        if(check(v)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}