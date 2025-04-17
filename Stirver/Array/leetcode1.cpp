#include<iostream>
using namespace std;
void reverse(int arr[],int size){
      int j=0;
      for(int i=0;i<size;i++){
        if(i+1<size){
            swap(arr[i],arr[i++]);
        }
        // if(i+1<size){
        //     j=arr[i];
        //     arr[i]=arr[i++];       ?????
        //     arr[i++]=j;
        // }
      }
      cout<<"after swapping your arrray: ";
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
      }
}
int main(){
    int rev[5];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<5;i++)
    {
        cin>>rev[i];
    }
    reverse(rev,5);
    return 0; 
}