#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,x;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        vector<int> a,b;
        int MAX=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            if(x<0) a.push_back(x);
            else b.push_back(x);
            MAX = max(x,MAX);
        }
        bool check=1;
        for(int i:a){
            if(i==MAX && check){
                cout<<m<<' '<<i<<' ';
                check=0;
            }
            else cout<<i<<' ';
        }
        for(int i:b){
            if(i==MAX && check){
                cout<<m<<' '<<i<<' ';
                check=0;
            }
            else cout<<i<<' ';
        }
        cout<<endl;
    }
    return 0;
}