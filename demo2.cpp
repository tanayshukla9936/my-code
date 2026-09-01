#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int a=23,b=37907,c=9;

cout<<"the value of a without setw is:"<<a<<"\n";
cout<<"the value of b without setw is:"<<b<<"\n";
cout<<"the value of c without setw is:"<<c<<"\n";


cout<<"the value of a:"<<setw(3)<<a<<"\n";
cout<<"the value of b:"<<setw(3)<<b<<"\n";
cout<<"the value of c:"<<setw(3)<<c<<"\n";


cout<<"the value of a:"<<setw(4)<<a<<"\n";
cout<<"the value of b:"<<setw(4)<<b<<"\n";
cout<<"the value of c:"<<setw(4)<<c<<"\n";

cout<<"the value of a:"<<setw(5)<<a<<"\n";
cout<<"the value of b:"<<setw(5)<<b<<"\n";
cout<<"the value of c:"<<setw(5)<<c<<"\n";
return 0;

}