#include<iostream>
#include<algorithm>
using namespace std;
void Solve(){
    int n,a[n],max=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    cout<<max<<endl;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}