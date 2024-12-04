#include<iostream>
using namespace std;
template<class T,class U>
float fxn(T n,U d){
if(d==0) throw "Can't divide by zero.";
cout<< float(n/d);
return 0;
}
int main(){
float a=8.45;
int b=2;
float res,res1,res2;
try{
    res=fxn(a,b);
    cout<<res<<endl;
    res1=fxn(b,0);
    cout<<res1<<endl;
    res2=fxn(b,a);
    cout<<res2<<endl;
}
catch(const char*s){
    cout<<"EXCPETION: "<<endl;
    cout<<s<<endl;
    return 0;
}
catch(float j){
    cout<<"EXCPETION: "<<endl;
    cout<<j<<endl;
    return 0;
}
}
