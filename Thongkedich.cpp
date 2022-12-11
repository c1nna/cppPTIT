#include<bits/stdc++.h>
using namespace std;
struct KT2_Thongkedich{
    int n,s;
};
int main(){
    int x;
    vector <KT2_Thongkedich> a;
    while(cin>>x){
        int ok=1;
        for (int j = 0; j < a.size(); j++)
        {
            if(a[j].n==x){
                ok=0;
                a[j].s++;
                break;
            }
        }
        if(ok==1){
            struct KT2_Thongkedich b;
            b.n=x;
            b.s=1;
            a.push_back(b);
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i].n<<" "<<a[i].s<<endl;
    }
    
}