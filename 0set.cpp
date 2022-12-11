#include<bits/stdc++.h>
using namespace std;
/*
    set<kieu> ten
    insert()
    find()
    count()
    erase()
*/
/*
    multiset<>
*/
/*
    unordered_set<>
*/
int main(){
    // set<int> s;
    // for (int i = 0; i < 10; i++)
    // {
    //     s.insert(i);
    // }
    // cout<<s.count(10)<<endl;
    // if(s.find(5) != s.end())
    //     cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
    // cout<<*s.begin()<<endl;
    // cout<<*s.rbegin()<<endl;
    // cout<<*s.end()<<endl;
    // for(set<int>::iterator it = s.begin(); it != s.end(); it++){
    //     cout<<*it<<" ";
    // }

    // int n;cin>>n;
    // set<string> s;
    // cin.ignore();
    // for (int i = 0; i < n; i++)
    // {
    //     string str;
    //     getline(cin,str);
    //     s.insert(str);
    // }
    // for(auto x:s){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // cout<<s.size()<<endl;

    // unordered_set<int> ms;
    // ms.insert(100);
    // ms.insert(200);
    // ms.insert(100);
    // ms.insert(200);
    // ms.insert(300);
    // ms.insert(50);
    // for(int x:ms){
    //     cout<<x<<" ";
    // }

    // 10 3
    // 1 2 3 1 4 5 1 8 9 10
    int n,k;cin>>n>>k;
    int a[n];;
    for(int &x:a) cin>>x;
    multiset<int> ms;
    for (int i = 0; i < k; i++)
    {
        ms.insert(a[i]);
    }
    for (int i = k; i < n; i++)
    {
        cout<<*ms.rbegin()<<" ";
        ms.erase(ms.find(a[i-k]));
        ms.insert(a[i]);
    }
    cout<<*ms.rbegin()<<endl;
    return 0;
}