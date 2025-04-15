#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> mystack;
    mystack.push(10);
    mystack.push(20);
    mystack.push(30);
    while(!mystack.empty())
{
    cout<<" "<<mystack.top();
    mystack.pop();
}    
return 0;
}       
