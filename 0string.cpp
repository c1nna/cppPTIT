#include<bits/stdc++.h>
using namespace std;
/*
    compare
    a<b : -1
    a==b : 0
    a>b : 1
*/
int main(){
    // string a = "abc";
    // string b ="z";
    // cout<<a.compare(b)<<endl;

    // string a = "abcdef";
    // string b = a.substr(2,3);
    // cout<<b<<endl;

    // string a = "1234564561587951231";
    // int x = stoi(a);
    // long long x = stoll(a);
    // cout<<x<<endl;

    // int n = 123456;
    // string s = to_string(n);
    // cout<<s<<endl;

    //string s = "java python php android lap     trinh";
    // string s = "java.python.php.android.lap.trinh";
    // stringstream ss(s);
    // string tmp;
    //while (ss>>tmp)
    // while(getline(ss,tmp,'.'))
    // {
    //     cout<<tmp<<endl;
    // }
    string s;cin>>s;
    string t = s.substr(0,2);
    
    cout<<t;
    
    return 0;
}