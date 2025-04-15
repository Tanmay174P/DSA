#include<iostream>
using namespace std;
int main(){
    //to find the size of the array
    int arr[5]={10,20,30,40,50};
    cout<<"The size of this array is: "<<sizeof(arr)<<endl;
    int size= sizeof(arr)/sizeof(int);
    cout<<"The size of this array is: "<<size<<endl;
    return 0;
;   
}