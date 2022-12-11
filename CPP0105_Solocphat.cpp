#include<iostream>
using namespace std;
void Test_case()
{
    string s;
    cin>>s;
    for(auto x:s)
    {
        if(x!='0'&&x!='6'&&x!='8'){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        Test_case();
    }
    return 0;
    
}