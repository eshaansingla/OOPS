#include <iostream>
using namespace std;
template<class T>
T Maz(T x,T y){ return (x>y)?x:y;}
int main() {
    cout<<Maz(2,69)<<endl;
    cout<<Maz('a','z')<<endl;
    cout<<Maz(0.420,0.32)<<endl;
    return 0;
}
