#include<iostream>
using namespace std;

int GetMax(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
        max=arr[i];
        }
    }
    return max;
    
}

int GetMin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
         min=arr[i];
        }
    }
    return min;
    
}

int main(){
  int n,array[100];
  cout<<"Enter the size of array: ";
  cin>>n;
  cout<<"Enter the element of the array: ";
  for(int i=0;i<n;i++){
      cin>>array[i];
  }
  cout<<"the maximum value is: "<<GetMax(array,n)<<endl;
  cout<<"the minimum value is: "<<GetMin(array,n)<<endl;

  return 0;
}