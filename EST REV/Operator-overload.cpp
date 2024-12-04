// #include<iostream>
// using namespace std;
// template<class T>
// class B;
// template<class T>
// class A{
// T a;
// public:
// A(){
//  cout<<"constructor"<<endl;
// }
// ~A(){
//  cout<<"destructor"<<endl;
// }
// A(T a){
//  this->a=a;
//  cout<<"constructor"<<endl;
// }
// operator float(){
//     return this->a;
// }
// void show(){
//     cout<<this->a<<endl;
// }
// friend A operator +(T ,B<T>);
// // A(){
// // }
// // A(T a,T b){
// // this->a=a;
// // this->b=b;
// // }
// // void show(){
// //     cout<<this->a<<endl;
// //     cout<<this->b<<endl;
// // }
// // A operator +(A o){
// //     A t;
// //     t.a=this->a+o.a;
// //     t.b=this->b+o.b;
// //     return t;
// // }
// friend class B<T>;
// };
// template<class T>
// class B{
//     T b;
//     public:
//     B(T b){
//         this->b=b;
//     }
//     friend A<T> operator + (T,B<T>);
// };
// template<class T>
// A<T> operator +(T m,B<T>obj){
// return A<T>(obj.b+m);
// }
// int main(){
// A<float>*n=new A<float>();
// /*float j=6.9;
// *n=j;
// A<float>m(2.5);
// float i=m;
// n->show();
// m.show();
// cout<<i<<endl;
// // A<char>obj1('a','b');
// // A<char>obj2(1,2);
// // A<char>ob3=obj1+obj2;
// // ob3.show();
// */
// B<int>otb(25);
// B<int>otb1(25);
// A<int>r=25 + otb;
// r.show();
// delete n;
// }
#include <iostream>
using namespace std;

template <class T>
class B;

template <class T>
class A {
    T a;

public:
    A() {
        cout << "constructor" << endl;
    }
    ~A() {
        cout << "destructor" << endl;
    }
    A(T a) {
        this->a = a;
        cout << "constructor" << endl;
    }
    operator float() {
        return this->a;
    }
    void show() {
        cout << this->a << endl;
    }

    template <class U>
    friend A<U> operator+(U, B<U>); // Proper friend declaration for a template function
    friend class B<T>;
};

template <class T>
class B {
    T b;

public:
    B(T b) {
        this->b = b;
    }

    template <class U>
    friend A<U> operator+(U, B<U>);
};

template <class T>
A<T> operator+(T m, B<T> obj) {
    return A<T>(obj.b + m);
}

int main() {
    A<float> *n = new A<float>();

    B<int> otb(25);
    A<int> r = 25 + otb;
    r.show();

    delete n;
}
