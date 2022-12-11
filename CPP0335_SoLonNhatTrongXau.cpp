#include<bits/stdc++.h>
using namespace std;
void solve(string s){
    int ans = INT_MIN;
    int num = 0;
    for(char x:s){
        if(isdigit(x)){
            num = num * 10 + x - '0';
        }else{
            ans = max(ans,num);
            num = 0;
        }
    }
    ans = max(ans,num);
    cout<<ans<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        solve(s);
    }
    return 0;
}