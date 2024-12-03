#include<iostream>
using namespace std;
class Student{
string name;
float skill;
int roll;
public:
Student(){
    this->name="No name";
    this->skill=1000;
    this->roll=100;
}
Student(string name,int roll,float skill){
    this->name=name;
    this->skill=skill;
    this->roll=roll;
}
Student(Student &copystudent){
    this->name=copystudent.name;
    this->skill=copystudent.skill;
    this->roll=copystudent.roll;
}
void print(){
    cout<<"Name: "<<this->name<<endl;
    cout<<"Roll:  "<<this->roll<<endl;
    cout<<"Skill: "<<this->skill<<endl;
    cout<<endl;
}
void change(){
this->name="Jesse";
this->roll=420;
}
};
int main(){
Student *s=new Student("Micheal Scott",69,98.76);
Student *s1=new Student("Walter White",5,99.1);
Student *s2=s1;
Student s3("John Cena",55,100);
Student *copy=new Student(s3);
copy->print();
}