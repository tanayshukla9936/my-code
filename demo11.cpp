#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}



//call by value---> variable ki value change krne ki koshish krta hai but original value change nhi hoti
// this will not swap the value of a and b 
void swap(int a,int b){   //temp a b
int temp=a;               //3    3 4
a=b;                      //3    4 4
b=temp;                   //3    4 3
}


//call by reference using pointer---> original value ka address pass krta hai and original value change ho jati hai
void swappointer(int* a,int* b){   //temp a b
int temp=*a;                      //3    3 4
*a=*b;                             //3    4 4
*b=temp;                          //3    4 3
}


//call by reference using using c++ reference variables
void swapReferenceVar(int &a,int &b){   //temp a b
int temp=a;                      //3    3 4
a=b;                             //3    4 4
b=temp;                          //3    4 3
}


int main(){
    int x=3,y=4;
    // cout<<"The sum of 3 and 4 is "<<sum(x,y)<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x,y);  //this will not swap the value of a and b 
    // swappointer(&x,&y);  //this will swap the value of a and b using pointer
    swapReferenceVar(x,y);  //this will swap the value of a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}


// Call by Value: swap(int a, int b) → copy pass hoti hai → original change nahi
// Pointer: swap(int *a, int *b) → address pass hota hai → original change
// Reference: swap(int &a, int &b) → original variable ka reference/alias pass hota hai → original change


// code by tanay16