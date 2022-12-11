#include<bits/stdc++.h>
using namespace std;
struct Time
{
    int h,m,s;
};
bool cmp(Time a, Time b){
    if(a.h != b.h) return a.h < b.h;
    if(a.m != b.m) return a.m < b.m;
    return a.s < b.s;
}
int main(){
    int n;cin>>n;
    Time a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].h>>a[i].m>>a[i].s;
    }
    sort(a, a+n, cmp);
    for(Time x:a){
        cout<<x.h<<" "<<x.m<<" "<<x.s<<endl;
    }
    return 0;
}
