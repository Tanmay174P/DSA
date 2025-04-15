#include<iostream>
using namespace std;
void summation(int arr[],int size){
   int sum=0;
   cout<<"Enter 5 elements: ";
   for(int i=0;i<5;i++){
    cin>>arr[i];
    sum+=arr[i];
   }
   cout<<"the summation of your array is: "<<sum<<":)"<<endl;
}
int main(){
 int arr[5];
summation(arr,5);
return 0;
}