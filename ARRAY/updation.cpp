#include<iostream>
using namespace std;
void update(int arr[],int size){
    cout<<"before updation array from funcion: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    arr[2]=120;    
    //if you do any changes on function array it will change the main() array too unlike variable {func has a copy of a var}. But here passing a copy of an address of an array.
    
    cout<<"after updation array from funcion: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
  int array[5]={10,20,30,40,50};
  update(array,5);
  cout<<"array calling from main: ";
      for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}