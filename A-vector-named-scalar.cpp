#include<iostream>
using namespace std;
class Scalar{
    public:
        int size;
        int capacity;
        int *arr;
        Scalar(){
            size=0;
            capacity=1;
            arr= new int[capacity];
        }
        void add(int a){
            if(size==capacity){
               int *arr2= new int[capacity*=2];
               for(int i=0;i<size;i++) arr2[i]=arr[i];
               arr=arr2;
            }
            arr[size++]=a;
        }
        void print(){
            for(int i=0;i<size;i++) cout<<arr[i]<<endl;
            cout<<endl;
        }
        void get(int i){
            if(i>=size || i<0) cout<< "Exceeds size"<<endl;
            else cout<<arr[i]<<endl;
        }
        void del(){
            if(size>0) size--;
            else cout<<"Scalar can not be reduced."<<endl;
        }
        void clear(){
            size=0;
        }
        void empty(){
            if(size==0) cout<<"Scalar is empty."<<endl;
            else cout<<"Scalar is not empty."<<endl;
        }
};
int main(){
    Scalar s;
    cout<<s.size<<" "<<s.capacity<<endl;
    for(int i=1;i<=100;i++) s.add(i);
    cout<<s.size<<" "<<s.capacity<<endl;
    s.print();
    s.empty();
    for(int i=100;i>=1;i--) s.add(i);
    cout<<s.size<<" "<<s.capacity<<endl;
    s.print();
    s.get(690);
    s.del();
    s.print();
    s.clear();
    s.print();
    s.empty();
}