#include<iostream>
#include<string>
using namespace std;
void Solve(){
    cin.ignore();
    string s;getline(cin,s);
    int l=s.length();
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==' '||s[i]=='\t'||s[i]=='\n')
            s.erase(s.begin()+i);
    }
    cout<<l-s.length()+1<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    
}