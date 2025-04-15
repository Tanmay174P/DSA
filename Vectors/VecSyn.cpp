#include<iostream>
#include<vector>
using namespace std;
int main(){
       //SYNTAX -->
       vector<int> vec; //empty vector
       vector<char> vec1={'a','b','c'};
       vector<int> vec2(5,1); \
       cout<<vec[0]<<endl;
       // Here the 3 is representing the size and 0 will be the value stored in each index.
   
   
      // for each loop --  
      for(char val : vec1){           // It can be i instead of val
       cout<<val<<" ";}
        // in for each loop i/val will not store the index now it will store the value itself at that index.
        
   
       cout<<" The size of the vector: "<<vec1.size()<<endl;
       cout<<" The capacity of the vector: "<<vec1.capacity()<<endl; 
       return 0;
}
