#include<bits/stdc++.h>
using namespace std;
void Solve(){
   int n;cin>>n;
   int a[n];
   for (int i = 0; i < n; i++)
   {
        cin>>a[i];
   }
   int i=1;
   while (i>0)
   {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if(i==a[j]) count++;
        }
        if(count==0){
            cout<<i<<endl;
            break;
        }
        else i++;
   }
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}