// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={0};      //your given array will be: 0 0 0 0 0 0 
//     cout<<"your given array will be: ";
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={-1};      //your given array will be: -1 0 0 0 0 0 
//     cout<<"your given array will be: ";
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }


// solution -->

#include<iostream>
using namespace std;
int main(){
    int size=6;     
    int arr[size]; 
    cout<<"your given array will be: ";
    for(int i=0;i<6;i++){
        arr[i]=1;
    }
    for(int i=0;i<6;i++){ 
        cout<<arr[i]<<" ";
    }
return 0;
}