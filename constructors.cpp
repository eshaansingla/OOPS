#include<iostream>
using namespace std;
class Car{
    public:
    Car(){

    }
        int price;
        string name;
        float maxspeed;
        string owner;
Car(int p,string n, float maxs, string own){
    price=p;
    name=n;
    maxspeed=maxs;
    owner=own;
}
void print(){
    cout<<price<<" "<<name<<" "<<maxspeed<<" "<<owner<<endl;
}
};
int main(){
    Car c1(10000000,"Bugatti",250.8569,"Eshaan");
    Car c2;
    c2.price=1000;
    c2.name="Swift";
    c2.maxspeed=100.67095;
    c2.owner="Someone";
    Car c3=c2; //deep copy
    Car c4(c2); // deep copy
    c3.owner="Anyone";
    c4.name="BMW";
    c1.print();
    c2.print();
    c3.print();
    c4.print();

}