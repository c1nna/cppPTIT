#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int Min=1e9,Max=-1e9;
        int a[n],b[100000]={};
        for(int i=0; i < n; i++){
            cin>>a[i];
            b[a[i]]++;
            Max = max(Max,a[i]);
            Min = min(Min,a[i]);
        }
        int cnt=0;
        for(int i=Min; i <= Max; i++){
            if(!b[i]) ++cnt;
        }
        cout<<cnt<<endl;
    }
    return 0;
}