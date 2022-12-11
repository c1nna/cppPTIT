#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void Test_Case(){
    double x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    double s = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    cout << setprecision(4) << fixed << s << endl;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        Test_Case();
    }
    return 0;
}