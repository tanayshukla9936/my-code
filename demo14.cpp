#include<iostream>
using namespace std;


int sum(int a, int b){
    return a+b;

}

int sum(int a, int b, int c){
    return a+b+c;
}

//calculate the volume of cylinder
int volume(double r, int h){
return(3.14*r*r*h);
}


//calculate the volume of cube
int volume(int a){
    return (a*a*a);
}


//rectangular box or cuboid 
int volume(int l, int b, int h){
    return (l*b*h);
}

int main(){
cout<<"the sum of 3 and 7 is "<<sum(3,7)<<"\n";  
cout<<"the sum of 3,6 and 7 is "<<sum(3, 6, 7)<<"\n";
cout<<"the volume of cuboid  3,6 and 7 is "<<volume(3, 6, 7)<<"\n";
cout<<"the volume of cylinder of radius 3 and height 7 is "<<volume(3, 7)<<"\n";
cout<<"the volume of cube of side 3 is "<<volume(3)<<"\n";  
  

    return 0;
}
//code by tanay19