#include<iostream>
using namespace std;
void displayArray(int arr[],int size){
cout<<"the printed array is: ";
int n=size;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl<<"printing done :)"<<endl;
}
int main(){
int arr[5]={10,20,30,40,50};
displayArray(arr,5);
int sizeofarray= sizeof(arr)/sizeof(int);
cout<<"size of your array will be: "<<sizeofarray;
return 0; 
}