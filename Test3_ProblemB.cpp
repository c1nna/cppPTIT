#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;cin>>n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a, a+n);
    for (int i = 0; i < n; i++)
    {
        //lon nhat < b[i];
        auto it = lower_bound(a, a+n, b[i]);
        //tim ra vi tri dau tien cua pt >= b[i]
        if(it == a){
            cout<<'#'<<" ";
        }
        else{
            --it;
            cout<<*it<<' ';
        }
    }
    return 0;
}