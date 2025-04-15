#include<iostream>
using namespace std;
int main (){

 int n,i=1;
 bool Prime=true;
 cout<<"enter the number to check:";
 cin>>n;
 for(i=2;i<n;i++){
    if(n%i==0){
        Prime=false;
        break;}
 }
 if (Prime==true){
    cout<<"the number is prime :) ";
 }
 else
 cout<<"the number is not prime :( ";
return 0;
}