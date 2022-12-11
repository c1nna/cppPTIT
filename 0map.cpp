#include<bits/stdc++.h>
using namespace std;
/*
    map<datatype1, datatype2> mp
    (key,value)
    insert()
    count()
    find()
    erase()
    co sx tang dan theo key
*/
/*
    multimap
*/
/*
    unordered_map
*/
int main(){
    // map<int, int> mp;
    // mp[100] = 200;
    // mp[200] = 300;
    // mp.insert({350, 400});
    // mp.insert({400, 500});
    // cout<<mp.size()<<endl;
    // mp[100] = 300;
    // cout<<mp.size()<<endl;
    // for(pair<int, int> x:mp){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    // for(map<int,int>::iterator it = mp.begin(); it != mp.end(); it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    // if(mp.count(300)!=0)
    //     cout<<"Found"<<endl;
    // else cout<<"NOT"<<endl;

    // if(mp.find(500)!=mp.end()) 
    //     cout<<"Found"<<endl;
    // else cout<<"NOT"<<endl;

    // mp.erase(100);
    // for(auto x:mp){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    //8
    //1 1 2 1 3 5 1 -4
    // 1 4
    // 2 1
    // 3 1
    // -4 1
    // 5 1
    // map<int, int> mp;
    // int n;cin>>n;
    // int a[1000];
    // for (int i = 0; i < n; i++)
    // {
        //int x;cin>>x;
    //     cin>>a[i];
    //     mp[a[i]]++;
    // }
    // for(auto it:mp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if(mp[a[i]] != 0){
    //         cout<<a[i]<<" "<<mp[a[i]]<<endl;
    //         mp[a[i]] = 0;
    //     }
    // }
    // map<string, int> mp;
    // int n;cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     string s;cin>>s;
    //     mp[s]++;
    // }
    // int max_fre = 0;
    // string res;
    // for(auto x:mp){
    //     if(x.second > max_fre){
    //         max_fre = x.second;
    //         res = x.first;
    //     }
    // }
    // cout<<res<<" "<<max_fre<<endl;

    return 0;
}