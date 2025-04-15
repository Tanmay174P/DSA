#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key){
       
       for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
       }
       return 0;
}
int main(){
    int key;
    cout<<"Enter an key to search: ";
    cin>>key;
    int arr[6]={10,20,30,40,50,60};
    bool found=linearSearch(arr,6,key);
    if(found){
        cout<<"the key is present :) "<<endl;
    }
    else
     cout<<"the key is absent :( "<<endl;


}