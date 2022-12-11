#include<iostream>
#include<string>
using namespace std;
void Solve(){
    string s;cin>>s;
    int n = s.length();
    int res=0;
    for (int i = 0; i < n; i++)
        for (int j = 1; j <= n-i; j++){
            string sub=s.substr(i,j);
            if(sub[0]==sub[sub.length()-1]){
                res++;
            }
        }
    cout<<res<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        Solve();
    }
    
}