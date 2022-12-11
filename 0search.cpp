#include<bits/stdc++.h>
using namespace std;
//linear search O(n)
//binary search O(logn)
//lower_bound(iter1, iter2, key) >=key
//upper_bound                    >key
bool bs(int a[], int n, int x){
    int l = 0, r = n-1;
    while (l<=r)
    {
        int m = (l+r)/2;
        if(a[m] == x){
            return true;
        }
        else if(a[m]<x){
            l = m + 1;
        }
        else{
            r = m - 1; 
        }
    }
    return false;
}
bool bin_search(int a[], int l, int r, int x){
    if(l > r)
        return false;
    int m = (l+r)/2;
    if(a[m] == x)
        return true;
    else if(a[m]<x)
        return bin_search(a, m+1, r, x);
    else  
        return bin_search(a, l, m-1, x);
}
int main(){
    // int n,x;cin>>n>>x;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // if(bs(a,n,x))
    //     cout<<"Found"<<endl;
    // else 
    //     cout<<"NOT"<<endl;
    // if(binary_search(a, a+n, x)) //binary_search(a, a+n, key) -> a[0] a[n-1]
    //     cout<<"FOUND"<<endl;
    // else 
    //     cout<<"NOT"<<endl;

    // int n,x;cin>>n>>x;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>v[i];
    // }
    // if(binary_search(v.begin(), v.end(), x))
    //     cout<<"FOUND"<<endl;
    // else cout<<"NOT"<<endl;
    int n,x;cin>>n>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    auto it = lower_bound(a, a+n, x);
    cout<<*it<<endl; //tra ve phan tu dau tien trong mang lon hon hoac bang x
    cout<<it-a<<endl; //vi tri ... distance(a.begin(),it)
    if(it==(a+n)) cout<<"NOT"<<endl;

    return 0;
}