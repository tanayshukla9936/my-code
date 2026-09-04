 #include<iostream>
 using namespace std;
 int main(){


int age;
cout<<"tell me your age"<<"\n";
cin>>age;

// SELECTION CONTROL STRUCTURE:IF ELSE-IF ELSE LADDER
//if((age<18) && (age>0)){
//cout<<"you can not come in party"<<"\n";

//}
//else if(age==18){
  // cout<<"you are a kid and you will get a kid pass to the party"<<"\n"; 
//}
//else if(age<1){
 //   cout<<"you are not yet born"<<"\n";
//}
//else{
  //  cout<<"you can come party"<<"\n";
//}

//SELECTION CONTROL STRUCTURE: switch case statements
switch (age)
{
case 18:
    
    cout<<"you are 18"<<'\n';
    break;
case 22:
    
    cout<<"you are 22"<<"\n";
    break;
case 2:
    
    cout<<"you are 2"<<"\n";
    break;

default:
    break;
}

// break ka mtlb ise yhi chodo and direct print kra do if we remove break then all print hoga jo age entre krenge uske niche ka

return 0;
 }
 // code by tanay9