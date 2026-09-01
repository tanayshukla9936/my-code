 #include<iostream>
using namespace std;

int main(){
    
//check positive,negative and zero
int a;
cout<<"Enter te value of a";
cin>>a;
if(a>0 && a!=0){
    cout<<"positive";
}
else if(a<0){
    cout<<"negative";
}
if(a==0){
    cout<<"zero";
}
    return 0;
}
//code with harry lec13