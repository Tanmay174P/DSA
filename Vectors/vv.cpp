#include<iostream>
using namespace std;
class Solution {
    public:
      string compareNM(int n, int m){
          if(n<m)
              return "lesser";
          else if(n>m)
             return "greater";
          else 
               return "equal";
      }
  };
  int main(){
      Solution obj;
      int n,m;
      cin>>n>>m;
      cout<<obj.compareNM(n,m);
      return 0;
}