#include<iostream>
using namespace std;


class Employee
{
private:
int a, b, c;
public:
int d, e;
void setData(int a, int b, int c);   //Declaration
void getData(){
    cout<<"the value of a is "<<a<<"\n";
    cout<<"the value of b is "<<b<<"\n";
    cout<<"the value of c is "<<c<<"\n";
    cout<<"the value of d is "<<d<<"\n";
    cout<<"the value of e is "<<e<<"\n";
}
};

void Employee::setData(int a1, int b1, int c1)
{
 a=a1;
 b=b1;
 c=c1;


}

int main(){
    Employee tanay;
    tanay.d=40;
    tanay.e=45;
    tanay.setData(1,2,3);
    tanay.getData();
    return 0;
}
//code by tanay21