#include<iostream>
using namespace std;
void Test_Case(){
    string s;
    cin>>s;
    if(s[s.length()-1]=='6'&&s[s.length()-2]=='8') cout<<1<<endl;
    else cout<<0<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Test_Case();
    }
    return 0;
}