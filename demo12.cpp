#include<iostream>
using namespace std;


// inline int product(int a,int b){       //Inline function----> to reduce the function call overhead
//     return a*b;
// }


//agr inline function hai to static variable nhi bnane hai

// int product(int a,int b){
// static int c=0;   //this exicuited only once and the value of c is preserved between function calls
// c=c+1;            //next line this function is run, the value of c will be retained
// return a*b+c;
// }


float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney*factor;
}



// int strlen(const char *p){
//statement
// }



int main(){
    
// int a,b;
// cout<<"enter the value of a and b"<<"\n";
// cin>>a>>b;
// cout<<"the product of a and b is"<<product(a,b)<<"\n";  
// cout<<"the product of a and b is"<<product(a,b)<<"\n";
// cout<<"the product of a and b is"<<product(a,b)<<"\n";
// cout<<"the product of a and b is"<<product(a,b)<<"\n";
// cout<<"the product of a and b is"<<product(a,b)<<"\n";
// cout<<"the product of a and b is"<<product(a,b)<<"\n";
// cout<<"the product of a and b is"<<product(a,b)<<"\n";
// cout<<"the product of a and b is"<<product(a,b)<<"\n";
// cout<<"the product of a and b is"<<product(a,b)<<"\n";
// cout<<"the product of a and b is"<<product(a,b)<<"\n";
// cout<<"the product of a and b is"<<product(a,b)<<"\n";
// cout<<"the product of a and b is"<<product(a,b)<<"\n";
// cout<<"the product of a and b is"<<product(a,b)<<"\n";
// cout<<"the product of a and b is"<<product(a,b)<<"\n";
// cout<<"the product of a and b is"<<product(a,b)<<"\n";
int money = 100000;
cout<<"if you have"<<money<<"Rs in your bank account,you will recieve "<<moneyReceived(money)<<"Rs after 1 year"<<"\n";
 cout<<"For Vip: if you have"<<money<<"Rs in your bank account,you will recieve "<<moneyReceived(money,1.10)<<"Rs after 1 year"<<"\n";
    return 0;

}


//code by tanay17