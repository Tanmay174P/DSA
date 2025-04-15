#include<iostream>
using namespace std;
int main(){
    //FINDING THE LARGEST ELEMENT OF AN ARRAY
    int arr[5]={10,4,80,90,7};
    int largest= INT_MIN;
    cout<<endl;
    for(int i=0;i<5;i++){
        // if(arr[i]>largest){
        //     largest= arr[i];
        // }
    //We will use min function instead of if
            largest= max(arr[i],largest);
    }
    cout<<"The largest element of your array is: "<<largest<<endl;
    return 0;
}