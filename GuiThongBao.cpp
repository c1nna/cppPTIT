#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    string s;
    while(t--){
        getline(cin,s);
        int sum=0;
        stringstream ss(s);
        while(ss>>s){
            if(sum+s.length()<100){
                cout<<s<<' ';
                sum+=s.length()+1;
            }
            else break;
        }
        cout<<endl;
    }
    return 0;
}