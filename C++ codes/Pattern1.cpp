// #include<iostream>
// using namespace std;
// int main(){

//     int n=4;
//     // cout<<"enter the number:";
//     // cin>>n;
//     for(int i =1;i<=n;i++){ // depicts the outer lines
//         char ch= 'A';
//         for(int j=1;j<=n;j++){ // depicts the values instide the lines  //inner lines => line start{first value}  
//             cout<<ch++<<" ";
//         }
//     cout<<endl;
//     }
// return 0;
// }

// A B C D 
// A B C D
// A B C D
// A B C D







// #include<iostream>
// using namespace std;
// int main(){

//     int n=4;
//     // cout<<"enter the number:";
//     // cin>>n;
//     for(int i =1;i<=n;i++){ // depicts the outer lines
//         for(int j=1;j<=n;j++){ // depicts the values instide the lines  //inner lines => line start{first value}  
//             cout<<j<<" ";
//         }
//     cout<<endl;
//     }
// return 0;
// }

// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4






// #include<iostream>
// using namespace std;
// int main(){

//     int n=4;
//     // cout<<"enter the number:";
//     // cin>>n;
//     for(int i =1;i<=n;i++){ // depicts the outer lines
//         for(int j=1;j<=n;j++){ // depicts the values instide the lines  //inner lines => line start{first value}  
//             cout<<"*"<<" ";
//         }
//     cout<<endl;
//     }
// return 0;
// }

// * * * * 
// * * * *
// * * * *
// * * * *

 




// #include<iostream>
// using namespace std;
// int main(){

//     int n=4;
//     int num=0;
//     // cout<<"enter the number:";
//     // cin>>n;
//     for(int i =0;i<n;i++){ // depicts the outer lines
//         for(int j=0;j<n;j++){ //inner lines
//             cout<<num<<" ";
//             ++num;
//         }
//     cout<<endl;
//     }
// return 0;
// }


// 0 1 2 3 
// 4 5 6 7
// 8 9 10 11
// 12 13 14 15









// #include<iostream>
// using namespace std;
// int main(){
//     char ch='A';
//     int n=4;
    
//     // cout<<"enter the number:";
//     // cin>>n;
//     for(int i=0;i<n;i++){ // depicts the outer lines
        
//         for(int j=0;j<=i;j++){ //inner lines
//             cout<<ch<<" ";
    
//         }
//     ch=ch+1;
//     cout<<endl;
//     }
// return 0;
// }

// A 
// B B
// C C C
// D D D D








// #include<iostream>
// using namespace std;
// int main(){
    
//     int n=4;
    
//     // cout<<"enter the number:";
//     // cin>>n;
//     for(int i=0;i<n;i++){ // depicts the outer lines
        
//         for(int j=i+1;j>0;j--){ //inner lines
//             cout<<j<<" ";
    
//         }
    
//     cout<<endl;
//     }
// return 0;
// }

// 1 
// 2 1
// 3 2 1
// 4 3 2 1












#include<iostream>
using namespace std;
int main(){
    
    int n=4;
    char ch='A';
    // cout<<"enter the number:";
    // cin>>n;
    for(int i=0;i<n;i++){ // depicts the outer lines
        
        for(int j=i+1;j>0;j--){ //inner lines
            cout<<ch<<" ";
    
        }
    ch=ch+1;
    cout<<endl;
    }
return 0;
}
