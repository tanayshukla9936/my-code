#include<iostream>
using namespace std;
class C2;

class C1{
    int val;
    friend void exchange(C1 &, C2 &);
    public:
    void indata(int a){
        val = a;
    }

    void display(void){
        cout<< val <<"\n";
    }
};

class C2{
    int val2;
    friend void exchange(C1 &, C2 &);
    public:
    void indata(int a){
        val2 = a;
    }

    void display(void){
        cout<< val2 <<"\n";
    }
};
/*
trick to swap two numbers a and b:
temp = a;
a = b;
b = temp;
*/

void exchange(C1 & x, C2 & y){
    int tmp = x.val;
    x.val = y.val2;
    y.val2 = tmp;

}
int main(){
    C1 oc1;
    C2 oc2;

    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2);

    cout<<"the value of c1 after exchanging becomes: ";
    oc1.display();
    cout<<"the value of c2 after exchanging becomes: ";
    oc2.display();
    return 0;
}
// code by tanay 28