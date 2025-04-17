#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Count(int n){
    int count=0;
    // int count=(int)(log10(n)+1);  //solution 2
    //Time Complexity = o(log10(n));
    // --> if the no. of iteration is based on division the TC always will be in log
    // e.g n/2 --> o(log2(n)) , n/5 --> o(log5(n))
    while(n>0){
        int lastdigit=n%10;    
        n=n/10;
        count++;
    }
    return count;
}
int main(){
    int a ;
    cout<<"enter your choice of integer digtis: ";
    cin>>a;
    cout<<Count(a);
}

