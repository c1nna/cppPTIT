#include<bits/stdc++.h>
using namespace std;
void vietHoa(string &s){
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
}
void chuanHoa(string &s){
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    
}
int main(){
    int t,n;cin>>t;
    
    while(t--){
        cin>>n;
        cin.ignore();
        string s;
        getline(cin,s);
        vector<string> v;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp) v.push_back(tmp);
        for (int i = 0; i < v.size(); i++)
        {
            v[i][0] = toupper(v[i][0]);
            for (int j = 1; j < v[i].length(); j++) v[i][j] = tolower(v[i][j]);
            
        }
        if(n==1){
            cout<<v[v.size()-1]<<" ";
            v.pop_back();
            for(auto i:v) cout<<i<<" ";
        }
        else{
            for(int i = 1; i < v.size(); i++) cout<<v[i]<<" ";
            cout<<v[0];
        }
        cout<<endl;
    }
    return 0;
}