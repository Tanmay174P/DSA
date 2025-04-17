#include<iostream>
using namespace std;
int Palindrome(int n){
    int original=n;
    int rev=0;
    while(n>0){
        int lastdigit= n%10;
        n=n/10;
        rev= (rev*10)+ lastdigit;
    }
    return original==rev;       
}
int main(){
    int n;
    cin>>n;
    cout<<Palindrome(n);
    return 0;
}