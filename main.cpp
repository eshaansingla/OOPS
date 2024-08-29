#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    float cgpa;
    void print(){
        cout<<name<<" "<<rollno<<" "<<cgpa<<endl;
}
};

int main(){
    Student s1,s2,s3;
    s1.name="Eshaan Singla";
    s1.rollno=102317111;
    s1.cgpa=9.26;
    s2.name="John";
    s2.rollno=102317125;
    s2.cgpa=9.5;
    s3.name="Joe";
    s3.rollno=102315689;
    s3.cgpa=9.21;
    s1.print();
    s2.print();
    s3.print();
}