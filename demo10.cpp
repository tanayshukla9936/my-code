#include<iostream>
using namespace std;

// int sum(int a, int b){  //--->function definition
// int c = a + b;
// return c;
// }


// function prototype --> compiler ko function ke bare me phle se information dena   
// type function-name (arguments);
// int sum(int a, int b); //-->Acceptable
// int sum(int a,b); //-->not Acceptable
   int sum(int,int ); //-->Acceptable
// void g(void);  //-->Acceptable
void g();  //-->Acceptable


int main(){
     int num1,num2;
     cout<<"enter first number"<<"\n";
     cout<<"enter second number"<<"\n";
     cin>>num1>>num2;
    //  num1 and num2 are actual parameters  
     cout<<"the sum is "<<sum(num1,num2)<<"\n"; //function call

    g();  //function call

    return 0;
}

int sum(int a, int b){
    // formal parameters a and b will be taking values from num1 and num2 which are actual parameters
    int c = a + b;
      return c; 
}


void g(){
    cout<<"hello, good morning"<<"\n";  
}
    // formal parameters----> jo variables function ke andar define hote hai
    // actual parameters----> variable passes to a function when it is called
// code by tanay15