#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n][3];
    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
            cnt += a[i][j];
        }
        if(cnt >=2) ++ans;
    }
    cout<<ans<<endl;
}