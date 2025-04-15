// Write a function (WAF) to calculate the sum and product of all numbers in an array.

#include<iostream>
using namespace std;
int Sum(double arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
double Product(double arr[],int size){
    double product=1;
    for(int i=0;i<size;i++){
        product*=arr[i];
    }
    return product;
}
int main(){
    double arr[5];
    int size=5;
    cout<<"Enter your array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Your given array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nThe sum of your array: "<<Sum(arr,size)<<endl;
    cout<<"The product of your array: "<<Product(arr,size)<<endl;
    return 0;
}