#include<iostream>
using namespace std;
void printArr(int arr[],int size){
    cout<<"the original array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverseArr(int arr[],int size){
     
     int j=0;
     int start=0;
     int end=size-1;
     while(start<=end){
        j=arr[start];
        arr[start]=arr[end];
        arr[end]=j;
        start++;
        end--;
     }
    // while(start<=end){
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }
}
int main(){
    int arr[5]={10,20,30,40,50};
    int brr[6]={1,2,3,4,5,6};
    
    reverseArr(arr,5);
    reverseArr(brr,6);

    printArr(arr,5);
    printArr(brr,6);

    return 0;
}