#include<iostream>
using namespace std;
class Base{
public:
Base(){
 cout<<"Base CONS "<<endl;
}
~Base(){
 cout<<"Base DES "<<endl;
}
// virtual void speak(){
//     cout<<"BASE class speaking......"<<endl;
// }
 virtual void speak()=0; // pure virtual function
};
class Derived:public Base{
public:
Derived(){
    cout<<"Derived CONS "<<endl;
}
~Derived(){
 cout<<"Derived DES "<<endl;
}
void speak(){
    cout<<"Derived class speaking......"<<endl;
}
void display(){
    cout<<"Derived class speaking......"<<endl; // bptr cant access as not in base class
}
};
using namespace std;
int main(){
    Base*b_ptr;
    Derived d;
    b_ptr=&d;
    b_ptr->speak();
}