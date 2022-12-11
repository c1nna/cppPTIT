#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,sub;
    getline(cin,s);
    getline(cin,sub);
    int pos = s.find(sub);
    s.erase(pos,sub.size());
    cout<<s<<endl;
}