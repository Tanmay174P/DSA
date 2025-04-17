#include<iostream>
using namespace std;
int ReverseNum(int n){
    int rev=0;
    while(n>0){
        int lastdigit= n%10;
        n=n/10;
        rev= (rev*10)+ lastdigit; // in this line --> still a runtime error why find out???
                                  // in test cases in leetcode
    }
    return rev;
}
int main(){
    int n;
    cin>>n;
    cout<<ReverseNum(n);
    return 0;
}