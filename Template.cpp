#include<iostream>
using namespace std;
template<class T=string,class S=float>
class Something{
T data;
S data1;
public:
Something(T data,S data1){
this->data=data;
this->data1=data1;
}
void print(){
    cout<<this->data<<" "<<this->data1<<endl;
}
};
template<class T1>
void function(T1 &x,T1 &y){
T1 temp=x;
x=y;
y=temp;
return;
}
int main(){
Something<>s("Eshaan Singla",9.26);
s.print();
auto a=90.44555;
auto b=99.7775;
function(a,b);
cout<<a<<" "<<b<<endl;
}