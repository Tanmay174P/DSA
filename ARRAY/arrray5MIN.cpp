#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,4,50};
    // INT_MAX and INT_MIN are basically minus infinity and plus infinity in c++
    int smallest= INT_MAX;
    for(int i=0;i<5;i++){
           
        // if(arr[i]<smallest){
            //     smallest=arr[i];
            // } 
            
    //We will use min function instead of if
          smallest= min(arr[i],smallest);
    }
    cout<<"The smallest number of this array will be: "<<smallest<<endl;
    return 0;
}