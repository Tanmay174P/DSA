#include<iostream>
using namespace std;
int main(){
    int j,n,arr[n];
    cout<<"enter the size of your array: ";
    cin>>n;
    cout<<"enter the values you want to insert in the array:";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"your new array after the insertion will be: ";
    while(j<=n){
        cout<<arr[j]<<" ";
        j++;
    }
    return 0;
   
}