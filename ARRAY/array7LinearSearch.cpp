#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
           return i;
        }
    }
    return -1;
}
int main(){
    int arr[5]={10,4,80,90,7};
    int target = 80;
    int size=5;

    cout<<linearSearch(arr,size,target)<<endl;  
    return 0;
   
}