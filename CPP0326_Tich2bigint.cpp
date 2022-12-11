#include<bits/stdc++.h>
using namespace std;
void Solve(){
    string a,b;cin>>a>>b;
    int len1 = a.length(), len2 = b.length();
    vector<int> res(len1+len2,0);
    int temp1=0,sum;
    for (int i = len1 - 1; i >= 0; i--)
    {
        int temp2=0,carry=0;
        int m=a[i]-'0';
        for (int j = len2 - 1; j >= 0; j--)
        {
            int n=b[j]-'0';
            sum=m*n+carry+res[temp1+temp2];
            carry=sum/10;
            res[temp1+temp2]=sum%10;
            temp2++;
        }
        if(carry>0) res[temp1+temp2]+=carry;
        temp1++;
    }
    int len=res.size()-1;
    while(len>=0 && res[len]==0) len--;
    if(len<0){
        cout<<0<<endl;return;
    }
    for (int i = len; i >=0 ; i--) cout<<res[i];
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}