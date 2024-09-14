#include<iostream>
using namespace std;
class Employees{
    public:
    int a;
    int b;
    int c;
    void setdata(int,int,int);
    void printit(void);
};
void Employees::setdata(int a,int b,int c){
this->a=a;
this->b=b;
this->c=c;
}
void Employees::printit(void){
cout<<this->a;
cout<<this->b;
cout<<this->c;
}
int main(){
Employees e1;
e1.setdata(1,2,3);
e1.printit();
}