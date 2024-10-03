#include<iostream>
using namespace std;
class Student{
public:
int age;
int roll;
string name;
};
int main(){
    Student s;
    s.name="Eshaan Singla";
    s.roll=102317111;
    s.age=19;
    cout<<"Name: "<<s.name<<endl<<"Roll No: "<<s.roll<<endl<<"Age: "<<s.age<<endl;
}