#include<iostream>
#include<math.h>
using namespace std;
void Test_case(){
    int n,count;
    cin>>n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0){
            count=0;
            while(n%i==0){
                n/=i;
                count++;
            }
            cout<<i<<' '<<count<<' ';
        }
    }
    if(n>1) cout<<n<<' '<<1<<' ';
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) Test_case();
    return 0;    
}