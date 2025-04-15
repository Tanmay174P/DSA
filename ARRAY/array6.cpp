#include<iostream>
using namespace std;

// PASS BY REFFERENCE -->  its basically if you do any changes in the function it wil reflect on the main too i.e the original array 

void PassByReff(int arr[],int size){
      cout<<"This is from function: ";
      for(int i=0;i<size;i++){
        arr[i]= 2*arr[i];
      }
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}
int main(){
         int arr[3]={10,20,30};
         cout<<"This is from main: ";
         for(int i=0;i<3;i++){
            cout<<arr[i]<<" ";
         }
         cout<<endl;

         PassByReff(arr,3);
         
}