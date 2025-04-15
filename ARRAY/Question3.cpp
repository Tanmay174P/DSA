#include<iostream>
using namespace std;
int main(){
    int Arr[6]={1,2,3,1,2,4};
    int New[6];
    for(int i=0;i<6;i++){
        int unique=Arr[i];
        for(int j=i+1;j<6;j++){
            if(Arr[j]==unique){
                break;
            }
        }
        New[i]=unique;
    }
    cout<<"The Unique elements of the array are: ";
    for(int i=0;i<6;i++){
        cout<<New[i]<<" ";
    }
    cout<<endl;
    return 0;
}