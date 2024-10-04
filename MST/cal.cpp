#include<iostream>
using namespace std;
class Complex;
static void getname(void);
class Calculator{
    static string s;
    friend void getname(void);
    public:
    static int vish(void);
    int calc(Complex m,Complex g);
    int calca(Complex m,Complex g);
};
class Complex{
    static int agg;
    static float e;
    static void fn(void);
    private:
    friend int Calculator :: calc(Complex,Complex);
    friend class Calculator;
    int a,b;
    public:
    void fnc(){
        fn();
    }
    Complex(int a,int b){
        this->a=a;
        this->b=b;
    }
};
float Complex::e=9.52;
void Complex :: fn(){
cout<<agg<<endl<<e<<endl;
}
string Calculator :: s="Magnus";
 void getname(){
    cout<<Calculator::s<<endl;
}
int Complex :: agg=10;
int Calculator :: vish(){
    cout<<endl<<++Complex::agg<<endl;
}
int Calculator :: calc(Complex m,Complex g){
        return (m.a+g.a);
    }
int Calculator :: calca(Complex m,Complex g){
        return (m.b+g.b);
    }
int main(){
Complex o1(1,2),o2(6,4);
Calculator *x=new Calculator();
cout<<x->calc(o1,o2)<<endl<<x->calca(o1,o2);
x->vish();
o1.fnc();
getname();
}