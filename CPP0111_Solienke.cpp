#include<iostream>
#include<math.h>
using namespace std;
bool Test_case(){
    string s;
    cin>>s;
    for (int i = 1; i < s.length(); i++)
    {
        if(abs(s[i]-s[i-1])!=1){
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--) Test_case()?cout<<"YES\n":cout<<"NO\n";
    return 0;
}