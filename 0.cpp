#include <bits/stdc++.h>
using namespace std;
//int: 4byte = 32bit: -2^31 -> 2^31-1
//long long: 8byte = 64bit: -2^63 -> 2^63-1
//float: 4byte 
//double: 8byte 
//char: 1byte: 256 : 0 -> 255
//bool: true 1, false

int main(){
    cout<<INT_MIN<<" "<<INT_MAX<<endl;
    // cout<<LLONG_MIN<<" "<<LLONG_MAX<<endl;
    
    // int a = 100;
    // int b = a++; //b=100, a++ -> 101
    // cout<<a<<" "<<b<<endl; //a=101, b=100

    // int a = 100;
    // int b = ++a; //++a -> 101 -> b=101
    // cout<<a<<" "<<b<<endl; //a=b=101
    
    // cout<<max(10,20)<<endl;
    // cout<<max({2,2,9,10,9,10})<<endl;
    // int a[5] = {1,2,1,4,8};
    // cout<<*min_element(a,a+5)<<endl;
    // vector<int> b = {1,2,1,4,8};
    // cout<<*max_element(b.begin(),b.end());

    // int a[5] = {1,2,4,5,8};
    // int sum = accumulate(a,a+5,0); //tinh tong
    // cout<<sum<<endl;

    // int x = 100, y = 200;
    // swap(x,y);
    // cout<<x<<' '<<y<<endl;

    // int a[5] = {1,2,1,3,5};
    // auto it = find(a,a+5,3);
    // if(it==a+5)
    //     cout<<"NOT"<<endl;
    // else 
    //     cout<<"FOUND"<<endl;
    
    // vector<int> b = {1,2,1,4,5};
    // auto it1 = find(b.begin(),b.end(),5);
    //  if(it1==b.end())
    //     cout<<"NOT"<<endl;
    // else 
    //     cout<<"FOUND"<<endl;

    // int a[5] = {1,2,3,4,5};
    // memset(a,0,sizeof(a));
    // for(int x:a)
    //     cout<<x<<' ';

    // vector<int> a(10);
    // fill(a.begin(),a.end(),1000);
    // for(int x:a) cout<<x<<" ";

    // vector<int> a = {1,2,3,4,5};
    // vector<int> b = {2,5,6,10,15};
    // vector<int> res(10);
    // merge(a.begin(),a.end(),b.begin(),b.end(),res.begin());
    // for(int x:res) cout<<x<<" ";

    // int a[5] = {1,2,5,6,8};
    // reverse(a,a+5);
    // for(int x:a) cout<<x<<" ";
    // cout<<endl;

    // string s = "ptit";
    // reverse(s.begin(), s.end());
    // cout<<s<<endl;

    int a[] = {1,2,3,4,5};
    int b[] = {1,4,7,9,10,12};
    vector<int> u(11);
    auto it = set_union(a,a+5,b,b+6,u.begin()); //mang giao
    u.resize(it-u.begin());
    for(int x:u) cout<<x<<" ";
    cout<<endl;
    
    vector<int> i(11);
    auto it1 = set_intersection(a,a+5,b,b+6,i.begin()); //mang hop
    i.resize(it1-i.begin());
    for(int x:i) cout<<x<<" ";
    cout<<endl;

    vector<int> d(11);
    auto it2 = set_difference(a,a+5,b,b+6,d.begin()); //thuoc mang a ma k thuoc mang b
    d.resize(it2-d.begin());
    for(int x:d) cout<<x<<" ";
    cout<<endl;

    vector<int> sd(11);
    auto it3 = set_symmetric_difference(a,a+5,b,b+6,sd.begin()); //k thuoc mang a hoac mang b
    sd.resize(it3-sd.begin());
    for(int x:sd) cout<<x<<" ";
    cout<<endl;
    return 0;
}