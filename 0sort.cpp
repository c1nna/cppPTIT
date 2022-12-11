#include<bits/stdc++.h>
using namespace std;
//bool cmp(int a, int b){
        // if(a>b)
        //     return true;
        // else 
        //     return false;
        //return a>b;
        //return abs(a) < abs(b);
//}
bool cmp(string a, string b){
    if(a.length() != b.length())
        return  a.length() > b.length();
    return a<b;
}
int main(){
    //int n;cin>>n;
    // vector<int> a(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    //sort(a, a+n);
    // sort(a.begin(), a.end()); //sx giam dan greater<int>()
    // for (int  i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    //int n;cin>>n;
    //string a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // sort(a,a+n); //greater<string>()
    // for(string x:a){
    //     cout<<x<<" ";
    // }

    // string s;
    // getline(cin,s);
    // sort(s.begin(), s.end()); //greater<char>()
    // cout<<s<<endl;

    // int n;cin>>n;
    // pair<int, int> a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i].first>>a[i].second;
    // }
    // sort(a, a+n);
    // for(auto it:a){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    
    // int n;cin>>n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // stable_sort(a, a+n, cmp); //bao toan vi tri tuong doi ban dau
    // for(int x:a){
    //     cout<<x<<" ";
    // }

    int n;cin>>n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n, cmp);
    for(string x:a){
        cout<<x<<" ";
    }
    return 0;
}
