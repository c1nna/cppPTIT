#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void Test_Case(){
    string x;
    cin>>x;
    string s = x;
    reverse(s.begin(),s.end());
    if(x==s) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--)
        Test_Case();
    return 0;
}