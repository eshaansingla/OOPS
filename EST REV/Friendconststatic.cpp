#include<iostream>
using namespace std;
class Complex{
int a,b;
const int start=0;
const static int start1=100;
static int i;
public:
    Complex(){
        this->a=0;
        this->b=0;
        cout<<"Constructor"<<endl;
    }
    ~Complex(){
        cout<<"Desctructor"<<endl;
    }
    void setVal(int,int);
    friend void printval(Complex);
    static void count();
    friend Complex* addition(Complex&,Complex&);
    void function() const;
};
void Complex::function() const{
cout<<start<<endl;
cout<<i<<endl;
cout<<this->a<<endl;
cout<<start1<<endl;
}
void Complex::setVal(int a,int b){
        this->a=a;
        this->b=b;
    }
int Complex::i=1;
void Complex::count(){
cout<<start1<<endl;
cout<<"Current count is: "<<i++<<endl;
}
void printval(Complex c){
    Complex::count();
    cout<<c.a<<"+"<<c.b<<"i"<<endl;
}
Complex* addition(Complex &c1,Complex &c2){
Complex* ans=new Complex();
ans->a=c1.a+c2.a;
ans->b=c1.b+c2.b;
return ans;
}
int main(){
    Complex* imaginary_nums=new Complex[5];
    for(int i=0;i<5;i++){
        imaginary_nums[i].setVal(i+1,i+2);
    }
    for(int i=0;i<5;i++){
        printval(imaginary_nums[i]);
    }
    Complex *simple=addition(imaginary_nums[0],imaginary_nums[1]);
    cout<<endl;
    cout<<endl;
    printval(*simple);
    simple->function();
    delete []imaginary_nums;
}