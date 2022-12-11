#include<iostream>
using namespace std;
void Test_case(){
    string s;
    cin>>s;
    while(1){
        int p = s.find("084");
        if(p==-1) break;
        s.erase(p,3);
    }
    cout<<s<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        Test_case();
    return 0;
}