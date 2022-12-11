#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<pair<int, int>> v;
    vector<int> vec;
    for (int i = 1; i <= n; i++)
    {
        int a;
        double x,y;
        cin>>a>>x>>y;
        v.push_back({x*0.7 + y*0.3 , a});
    } 
    sort(v.begin() , v.end());
    for (int i = v.size() - 1; i >= v.size() - 7; i--)
    {
        // cout<<v[i].second<<" ";
        vec.push_back(v[i].second);
    }
    sort(vec.begin(), vec.end());
    for (int &i:vec )
    {
        cout<<i<<" ";
    }
    return 0;
}