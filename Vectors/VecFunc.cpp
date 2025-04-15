#include<iostream>
#include<vector>
using namespace std;
int main(){
     //Functions of vector-->
     // 1.size()
     // 2.push_back() --- element will be pushed in last index 
     // 3.pop_back()  --- last element will popped 
     // 4.front()     --- front value
     // 5.back()      --- back value
     // 6.at()        --- give the element of a particular index same as vec[i]

       vector<int> vec; //empty vector

       cout<<"\nThe size of the vector: "<<vec.size()<<endl; 
       vec.push_back(34);
       vec.push_back(43);
       vec.push_back(54);
       vec.push_back(44);
       cout<<"\nThe size of the vector: "<<vec.size()<<endl; 
       cout<<"your current vector: "; 
       for(int val: vec){
          cout<<val<<" ";
     }
       cout<<"\n\nAfter popping: ";
     vec.pop_back();
     cout<<"\nyour current vector: "; 
       for(int val: vec){
          cout<<val<<" ";
     }
     cout<<endl;
     cout<<"\nThe front value of your vector: "<<vec.front()<<endl;
     cout<<"The back value of your vector: "<<vec.back()<<endl;
     cout<<" The value at index 2: "<<vec.at(2)<<endl;
     cout<<"\nThe size of the vector: "<<vec.size()<<endl; 
     cout<<" The capacity of the vector: "<<vec.capacity()<<endl; 
     // let us take an example for capacity 
     // in this case there are 3 elements left in the vector i.e the size will be 3 but the when the last element pushed back this time the vector size will be double and the capacity will show as plus one


       return 0;
}
