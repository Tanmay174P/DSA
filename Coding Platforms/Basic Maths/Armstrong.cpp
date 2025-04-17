#include<iostream>
using namespace std;
int Armstrong(int n){   // are those whose cube/square sum come up to be same as original
    int rev=0; 
    int original=n;              // e.g (371) = 3^3+7^3+1^3 = 371
    int arm=0;                   // again some testcase failed in CODINGNINJAS ???
    while(n>0){
        int lastdigit= n%10;
        n=n/10;
        rev= (rev*10)+ lastdigit;
        arm=arm + (lastdigit*lastdigit*lastdigit);
    }
    return original==arm;       
}
int main(){
    int n;
    cin>>n;
    cout<<Armstrong(n);
    return 0;
}