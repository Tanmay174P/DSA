#include<iostream>
#include<math.h>
using namespace std;
//The square root (sqrt()) Method;
void PrimeNo(int n){  // Prime numbers are those which has exactly two factors(1 and itself)
        int count=0;
        for(int i=1;i*i<=n;i++){   // instead of [i*i<=n] --> [i<=sqrt(n)] can be used
            if(n%i==0){
                count++;
                if((n/i)!=i){
                    count++;
                }
            }
        }
        if(count==2){
            cout<<"it is a prime number:)";
        }
        else
            cout<< "not a prime number:( ";
}
int main(){
    int n;
    cin>>n;
    PrimeNo(n);
    return 0;
}