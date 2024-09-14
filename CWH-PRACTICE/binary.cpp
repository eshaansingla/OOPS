#include<iostream>
using namespace std;
class Binary{
    static int counter;
    public:
    string s;
    int data;
    void disp(){
        cout<<this->s<<endl;
    }
    static void increment();
    ~Binary(){ cout<<"destructor"<<endl;}
};
int Binary :: counter;
void Binary :: increment(){
    counter++;
    cout<<counter<<endl;
}
int main(){
Binary b1,b2;
b2.s="hi";
b2.disp();
b1.s="hsi";
b1.disp();
b2.increment();
b2.increment();
for(int i=0;i<10;i++) b1.increment();
}