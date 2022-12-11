#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
    int t,n;cin>>t;
    while (t--)
    {
        int cnt=0;
        int dd[1000005] ={};
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            dd[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if(dd[a[i]] > 1){
                cnt+= dd[a[i]];
                dd[a[i]] = 0;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}