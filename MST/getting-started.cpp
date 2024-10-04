#include<iostream>
using namespace std;
class Student{
private:
float cgpa;
string nick;
public:
static int i;
int age;
int roll;
string name;
Student(){ i++;}
Student(string name,int age,int roll,float cgpa){
this->name=name;
this->age=age;
this->roll=roll;
this->cgpa=cgpa;
i++;
}
void print(){
cout<<"Name: "<<this->name<<endl<<"Roll No: "<<this->roll<<endl<<"Age: "<<this->age<<endl<<"CGPA: "<<this->cgpa<<endl<<"Nickname: "<<this->nick<<endl<<endl;
}
void setdata(float cgpa,string nick);
static void printstatic(void);
};
void Student :: setdata(float cgpa,string nick){
    this->cgpa=cgpa;
    this->nick=nick;
}
void Student :: printstatic(){
    cout<<i<<endl;
}
int Student ::  i;
int main(){
    Student s1("Someone",19,69,6.9);
    s1.printstatic();
    Student s;
    s.name="Eshaan Singla";
    s.roll=102317111;
    s.age=19;
    s.setdata(9.26,"Ishu");
    s.print();
    s1.print();
    s.printstatic();
}