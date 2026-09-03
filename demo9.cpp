#include<iostream>
using namespace std;

// struct employee //struct ka mtlb hai ki mai ek employee ka data type bana rha hu jisme 3 data members hai id,favchar,salary
// {
//     int id; 
//     char favchar;
//     float salary;   
// }; 





// typedef struct employee    //typedef ka mtlb hai jise mai phle struct employee bolta tha ab usse "ep" bs bolunga "it is used for making short and convenient name of struct"
// {
// /*data*/
// int id;
// char favchar;
// float salary;
// } ep;




// union money  // union me saare variable ek sath use nhi hote ek hi hota hai ek time pr
// {
//     /* data */
// int rice;
// char car;
// float pounds;
// };




int main(){

enum meal{breakfast,dinner,lunch};  //enum ka use jb kisi variable ko fixed option or choice dena ho to use krte hai 
meal m1 = breakfast;
cout<<m1<<"\n";
meal m2 = lunch; 
cout<<m2<<"\n";
meal m3 = dinner; 
cout<<m3<<"\n"; 
// cout<<breakfast<<endl;  
// cout<<dinner<<endl;      
// cout<<lunch<<endl;   


// struct employee tanay;
// struct employee rudra;  
// struct employee deepak;
// struct employee krishna;
// struct employee bhavisya;


// ep tanay;
// ep rudra;
// ep deepak;
// ep krishna;
// ep bhavisya;
// ep sumit;


// union money m1;
// m1.rice = 34;
// m1.car = 'c';
// // cout<<m1.rice<<"\n";
// cout<<m1.car<<"\n";



// tanay.id = 9;
// tanay.favchar = 'c';    
// tanay.salary = 1200000;
// cout<<"The id of employee is "<<tanay.id<<endl;
// cout<<"The favchar of employee is "<<tanay.favchar<<endl; 
// cout<<"The salary of employee is "<<tanay.salary<<endl;
// cout<<"The size of employee is "<<sizeof(tanay)<<endl;

    return 0;
}
//code by tanay14