#include<iostream>
using namespace std;
class Car{
    public:
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
    c1.print();

}