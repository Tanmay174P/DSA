
// Write a function (WAF) to swap the maximum and minimum numbers of an array.
#include<iostream>
using namespace std;
// void swap(int arr[],int max,int min,int temp=0){
int main(){
    
    int temp=0;
    int arr[5]={10,2,30,40,50};
    int MIN= INT_MAX,minindex;
    int Max= INT_MIN,maxindex;
    for(int i=0;i<5;i++){
          if(arr[i]<MIN){
            MIN=arr[i];
            minindex=i;
          } 
          if(arr[i]>Max){
            Max=arr[i];
            maxindex= i;
          }
    }
// swap(arr[minindex],arr[maxindex]);---> Incorrect use of swap() function
 // swap(arr[minindex], arr[maxindex]); is incorrect in this context because swap() works with single values, not array elements.Fix: Use a temporary variable to swap manually.
    temp=arr[minindex];
    arr[minindex]=arr[maxindex];
    arr[maxindex]=temp;
    cout<<"The MIN number of this array will be: "<<MIN<<endl;
    cout<<"The Max element of your array is: "<<Max<<endl;
    cout<<"Your array after swapping: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
    
