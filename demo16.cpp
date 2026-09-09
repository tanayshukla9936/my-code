#include<iostream>
#include<string>
using namespace std;

class binary{
   string s;
   
   public:
     void read(void);
     void chk_bin(void);

};

void binary :: read(void){
    cout<<"enter a binary number"<<"\n";
    cin>>s;
}

void binary :: chk_bin(void){
    for (int  i = 0; i < s.length(); i++)
    {
      if(s.at(i)!='0' && s.at(i)!=1){
        cout<<"incorrect binary format"<<"\n";
      }
    }
    
}
int main(){
// OOPs - classes and objects

// c++ --> initially called --> c with classes by stroustroup
// class --> Extension of structure (in C)
// structure had limitation 
//       --> members are public 
//       --> no methods 
// classes --> structures + more 
// classes --> can have methods and properties 
// classes --> can make few members as private & few as public 
// structure in c++ are typedefd
// you can declare object along with the class declarationlike this: 
/* class Employee{
//    // class defination 
} tanay, rudra, deepak; */
// tanay.salary = 8 makes no sense if salary is private


// Nesting of member function 
binary b;
b.read();
b.chk_bin();
return 0;
}
// code by tanay22