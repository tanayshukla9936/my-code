#include<iostream>
using namespace std;

int main(){
    //what is pointer?----> data type which hold the address of other data type
   
    int a=3;
    int* b = &a;
     //& --->(address of) operator
    cout<<"the address of a is"<<&a<<"\n"; // 1 and 2 are same 
    cout<<"the address of a is"<<b<<"\n"; //

//* --->dereferencing operator
    cout<<"the value at address b is"<<*b<<"\n"; 
    
//pointer to pointer
int** c = &b;
cout<<"the address of b is"<<&b<<"\n";
cout<<"the address of b is"<<c<<"\n";
cout<<"the value at address c is"<<*c<<"\n";
    return 0;
}
//code with harry lec12