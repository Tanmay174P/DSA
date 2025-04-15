#include<iostream>
using namespace std;

// Reversing of an array using 2 pointer method
// its basicall swapping the 2 var i.e strt and end

void Reverse(int arr[],int size,int start,int end){
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={10,20,30,40,50,60};
    int size=6;
    int start=0,end= size-1;
    Reverse(arr,size,0,size-1);
    return 0;
}
    
