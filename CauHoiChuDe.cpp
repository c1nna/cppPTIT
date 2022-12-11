#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    cin.ignore();
    string s[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin,s[i]);
    }
    unordered_map<string,int> m;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        if(i==0||s[i-1]==""){
            v.push_back(s[i]);
            int tmp = i+1;
            while(s[tmp]!=""&&tmp<n){
                m[s[i]]++;
                tmp++;
            }
        }
    }
    for (auto j:v)
    {
        for(auto i:m){
            if(i.first==j){
                cout<<i.first<<": "<<i.second<<endl;
                break;
            }
        }
    }
    return 0;
}