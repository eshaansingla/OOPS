#include<iostream>
using namespace std;
class Vehicle{
    public:
        int price;
        string fuel;
        int age;
        float speed;
        Vehicle(){

    }
    Vehicle(int price,string fuel,int age,float speed){
        this->price=price;
        this->fuel=fuel;
        this->age=age;
        this->speed=speed;
    }
};
class Twowheeler: public Vehicle{
    
    public:
        int bootspace;
        Twowheeler(){

    }
    Twowheeler(int price,string fuel,int age,float speed,int bootspace): Vehicle(price,fuel,age,speed) {
            this->bootspace = bootspace;
        }
};
class Bike: public Twowheeler{
    
    public:
        int gears;
    Bike(){

    }
    Bike(int price,string fuel,int age,float speed,int bootspace,int gears)
        : Twowheeler(price,fuel,age,speed,bootspace) {
            this->gears = gears;
        }
};
int main(){
    Bike b1(1000,"petrol",20,23.56902,10,6);
    cout << "Price: " << b1.price << endl;
    cout << "Fuel: " << b1.fuel << endl;
    cout << "Age: " << b1.age << endl;
    cout << "Speed: " << b1.speed << endl;
    cout << "Bootspace: " << b1.bootspace << endl;
    cout << "Gears: " << b1.gears << endl;

}