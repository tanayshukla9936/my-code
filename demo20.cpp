#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    friend Complex sumComplex(Complex o1, Complex o2);   // friend function---> class ka private data access kr skta hai
        void printNumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<"\n";
    }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main(){
    Complex c1, c2, sum;
    c1.setNumber(1,5);
    c1.printNumber();

    c2.setNumber(4,8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    
    return 0;
}
/* Properties of friend function
1. Not in the scope of class.
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == invalid.
3. can be invoked without the help of any object.
4. usually contains the objects as argument.
5. can be declared inside public or private section of the class.
6. it cannot access the member directly by their names and need object_name.member_name to acces any member.

*/
// code by tanay26