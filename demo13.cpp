#include<iostream>
using namespace std;

// recursiuon ---> jab koi function khud ko hi call kre
// int factorial(int n){
// if(n<=1){
//     return 1;
// }
// return n * factorial(n-1);
// }

// step by step calculation of factorial(4)
// factorial(4) = 4*factorial(3);
// factorial(4) = 4*3*factorial(2);
// factorial(4) = 4*3*2*factorial(1);
// factorial(4) = 4*3*2*1;
// factorial(4) = 24




// recursive 
int fib(int n){
    if(n<2){
        return 1;
    }
 return fib(n-2) + fib(n-1);
}

int main(){
// factorial of a number:
//6! = 6*5*4*3*2*1 = 720
//0! = 1 by defination
//1! = 1 by defination
//n! = n*(n-1)!
int a;
cout<<"Enter a number"<<"\n";
cin>>a;
// cout<<"the factorial of "<<a<<" is "<<factorial(a)<<"\n";
cout<<"the term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<"\n";
    return 0;
}

// recursion---> kya ho rha hai
// recursive---> kaun kr rha hai

// code by tanay18