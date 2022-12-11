#include<bits/stdc++.h>
using namespace std;
int main(){
    fstream in;
    in.open("CONTACT.in");
    string ss;
    set<string> s;
    while(in >> ss){
        for (int i = 0; i < ss.size(); i++)
        {
            ss[i] = tolower(ss[i]);
        }
        s.insert(ss);
    }
    for(auto i:s) cout<<i<<endl;
    in.close();
    return 0;
}