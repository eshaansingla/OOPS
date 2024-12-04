#include<iostream>
using namespace std;
template<typename T1,typename T2>
class Base{
T1 a;
T2 b;
public:
Base(){
    cout<<"Cons"<<endl;
}
~Base(){
    cout<<"DES"<<endl;
}
};
template<class T1,class T2>
void swap(T1 a,T1 b){
    int *temp=&a;
    *a=&b;
    *b=temp;
}
int main(){
//Base<int,char>*b=new Base<int,char>();
//cout<<sizeof(*b)<<endl;
//delete b;
char a='E';
char c='b';
swap(a,c);
cout<<a<<" "<<c<<endl;
}