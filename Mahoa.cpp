#include<iostream>
using namespace std;
void Solve(){
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        int j = i;
        while(s[i]==s[j]&&j<s.length()) 
            j++;
        cout<<s[i]<<j-i;
        i=j-1;
    }
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}