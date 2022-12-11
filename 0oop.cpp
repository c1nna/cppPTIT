#include<bits/stdc++.h>
using namespace std;
//Encapsulation
//Access modifier: private, public, protected
//Constructor: Ham khoi tao
//Destructor: Ham huy
//This pointer
//setter getter
//static
//friend func, class
//forward declaration
// << >>
//nap chong 2 toan tu cin, cout
//cout: ostream
//cin: istream 
class GiaoVien;
class SinhVien;

class SinhVien{
    friend class GiaoVien;
    private:
        string id, ten, tuoi, ns;
        double gpa;
        static int dem;
    public:
        SinhVien();
        SinhVien(string, string, string, string, double);
        // void xinchao();
        // void dihoc();
        void nhap();
        void in();
        double getGpa();
        string getId();
        string getName();
        string getTuoi();
        string getNs();
        void setGpa(double);
        void tangDem();
        int getDem();
        friend void inthongtin(SinhVien);
        friend void chuanHoa(SinhVien&);
        friend istream& operator >> (istream &in, SinhVien& a);
        friend ostream& operator << (ostream &out, SinhVien a);
        //bool operator < (SinhVien a);
        friend bool operator < (SinhVien a, SinhVien b);
        // ~SinhVien();
};
istream& operator >> (istream &in, SinhVien& a){
    cout<<"Nhap id: "; in>>a.id;
    cout<<"Nhap ten: "; in.ignore();
    getline(in, a.ten);
    in>>a.tuoi>>a.ns>>a.gpa;
    return in;
}
ostream& operator << (ostream &out, SinhVien a){
    out<<a.id<<" "<<a.ten<<" "<<a.tuoi<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
    return out;
}
// bool SinhVien::operator < (SinhVien a){
//     return this->gpa < a.gpa;
// }
bool operator < (SinhVien a, SinhVien b){
    return a.gpa<b.gpa;
}

int SinhVien::dem = 0;
void inthongtin(SinhVien a){
    cout<<a.id<<" "<<a.ten<<endl; 
}
void chuanHoa(SinhVien &a){
    string res = "";
    stringstream ss(a.ten);
    string token;
    while(ss>>token){
        res+= toupper(token[0]);
        for (int i = 1; i < token.length(); i++)
        {
            res+= tolower(token[i]);
        }
        res+=" ";
    }
    res.erase(res.length() - 1);
    a.ten = res;
}
//Implementation
void SinhVien::tangDem(){
    ++dem;
}
int SinhVien::getDem(){
    return dem;
}
SinhVien::SinhVien(){
    // cout<<"Ham khoi tao duoc goi!!!"<<endl;
    // this->id = this->ten = this->tuoi = this->ns = "";
    // this->gpa = 0;
}
SinhVien::SinhVien(string id, string ten, string ns, string tuoi, double gpa){
    cout<<"Ham khoi tao co tham so duoc goi!!!"<<endl;
    this->id = id;
    this->ten = ten;
    this->tuoi = tuoi;
    this->ns = ns;
    this->gpa = gpa;
}
// void SinhVien::xinchao(){
//     cout<<"Hello !"<<endl;
// }
// void SinhVien::dihoc(){
//     cout<<"Di hoc !"<<endl;
// }
void SinhVien::nhap(){
    // cout<<"Nhap id : ";cin>>this->id;
    ++dem; //dem = 1
    this->id = "SV" + string(3 - to_string(dem).length(), '0') + to_string(dem);
    cout<<"Nhap ten : ";getline(cin,this->ten);
    cout<<"Nhap tuoi : ";cin>>this->tuoi;
    cout<<"Nhap ngay sinh : ";cin>>this->ns;
    cout<<"Nhap diem : ";cin>>this->gpa;
    cin.ignore();
}
void SinhVien::in(){
    cout<<this->id<<" "<<this->ten<<" "<<this->ns<<" "<<fixed<<setprecision(2)<<this->gpa<<endl;
}
double SinhVien::getGpa(){
    return this->gpa;
}
void SinhVien::setGpa(double gpa){
    this->gpa = gpa;
}
// SinhVien::~SinhVien(){
//     cout<<"Doi tuong duoc huy tai day"<<endl;
// }
bool cmp(SinhVien a, SinhVien b){
    return a.getGpa() > b.getGpa();
}

class GiaoVien{
    private:
        string khoa;
    public: 
        void update(SinhVien&);
};
void GiaoVien::update(SinhVien& x){
    x.gpa = 3.20;
}

int main(){
    // int n;cin>>n;
    // SinhVien a[100];
    // for (int i = 0; i < n; i++)
    // {
    //     a[i].nhap();
    // }
    // sort(a, a+n, cmp);
    // for (int i = 0; i < n; i++)
    // {
    //     a[i].in();
    // }
    //x.setGpa(2.18);

    // SinhVien x;
    // x.tangDem(); //dem = 1
    // x.tangDem(); //dem = 2
    // SinhVien y;
    // cout<<y.getDem()<<endl;
    // y.tangDem();
    // SinhVien z;
    // cout<<x.getDem()<<" "<<y.getDem()<<" "<<z.getDem();
    
    // SinhVien x;
    // x.nhap();
    // GiaoVien y;
    // y.update(x);
    // x.in();

    // x.in();
    // SinhVien y;
    // y.nhap();
    // y.in();
    
    // SinhVien x,y;
    // cin>>x>>y;
    // if(x < y) cout<<"YES";
    // else cout<<"NO";
    int n;cin>>n;
    SinhVien a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    for(SinhVien x:a){
        cout<<x;
    }
    return 0;
}