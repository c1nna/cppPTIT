#include <bits/stdc++.h>
using namespace std;
//
class Person{
    private:
        string name;
        string addr;
    public: 
        Person(string name, string addr){
            this->name = name;
            this->addr = addr;
        }
        string getName(){
            return name;
        }
        string getAddr(){
            return addr;
        }
        void setName(string name){
            this->name = name;
        }
        void setAddr(string addr){
            this->addr = addr;
        }
        // void nhap(){
        //     getline(cin,name);
        //     getline(cin,addr);
        // }
        void in(){
            cout<<name<<" "<<addr<<" ";
        }
};
class Student : public Person{
    private:
        float gpa;
    public:
        Student(string name, string addr, float gpa) : Person(name,addr){
            this->gpa = gpa;
        }
        float getGpa(){
            return gpa;
        }
        void setGpa(float gpa){
            this->gpa = gpa;
        }
        // void nhap(){
        //     Person::nhap(); //func overriding
        //     cin>>gpa;
        // }
        void in(){
            Person::in();
            cout<<fixed<<setprecision(2)<<gpa<<endl;
        }
};

int main(){
    Student s("Nguyen Van A","Ha Noi",3.5);
    s.in();
    return 0;
}