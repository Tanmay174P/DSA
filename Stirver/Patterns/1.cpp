// In any online compiler you have to code the body of a funciton only so start using online compilers too
#include <iostream>
using namespace std;
void print1(int n ){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}
int main(){
    int t;
    cin>>t;
    for(int i = 0;i<=t;i++){
        int n;
        cin>>n;
        print1(n);
    }
    return 0;
}