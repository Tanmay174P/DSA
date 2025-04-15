#include<iostream>
using namespace std;
int main(){
    // char ch='A';
    for(int i=0;i<4;i++){
        char ch='A';
          for(int j=0;j<4;j++){ //new line is starting 
            cout<<ch<<" ";
            ch++;
          }
        //   ch='A';
          cout<<endl;
    }
    return 0;
}