#include <bits/stdc++.h>
using namespace std;
int main(){
    map<double,int> m;
    int n;
    double x;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        ++m[x];
    }
    m.erase(m.begin());
    auto it = m.end();
    --it;
    m.erase(it);
    double sum=0;
    int cnt=0;
    for(auto i:m){
        sum+=i.first*i.second;
        cnt+=i.second;
    }
    cout<<fixed<<setprecision(2)<<sum/cnt;
    return 0;
}