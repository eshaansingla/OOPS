#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    float marks;
    int roll;
    Student(){
        cout<<"Student"<<endl;
    }
    Student(string name,float marks,int roll){
        this->name=name;
        this->marks=marks;
        this->roll=roll;
    }
    void getdetails(){
        cout<<this->name<<endl;
        cout<<this->marks<<endl;
        cout<<this->roll<<endl;
    }
    ~Student(){
        cout<<" DES Student"<<endl;
    }
};
class Pgrad{
    public:
    int cl;
    int sal;
    Pgrad(){
    cout<<"pgrad"<<endl;
    }
    Pgrad(string name,float marks,int roll,float gpa,int att,int cl,int sal){
        this->sal=sal;
        this->cl=cl;
    }
    ~Pgrad(){
    cout<<" des pgrad"<<endl;
    }
};
class Ugrad:public Student,virtual public Pgrad{
    public:
    float gpa;
    int att;
    Ugrad(){
        cout<<"Ugrad"<<endl;
    }
    Ugrad(string name, float marks, int roll, float gpa, int att) : Student(name, marks, roll) {
    this->gpa = gpa;
    this->att = att;
}
    void getdetails(){
        cout<<this->name<<endl;
        cout<<this->marks<<endl;
        cout<<this->roll<<endl;
        cout<<this->gpa<<endl;
        cout<<this->att<<endl;
    }
    ~Ugrad(){
        cout<<"DESTROY Ugrad"<<endl;
    }
};

int main(){
Ugrad u;
}