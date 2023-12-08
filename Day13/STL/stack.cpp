#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <string> s;    //Stack means first in last out. Example of plates in wedding arranged in order.
    s.push("Computer ");
    s.push("Science ");
    s.push("CSE ");
    cout<<"Element at Top :"<<s.top()<<endl;;   //CSE as it is entered last into the stack. 
    
    s.pop();
    cout<<"Element at Top :"<<s.top()<<endl;;   // Science as CSe is Pop out (Removed).

    cout<<"Empty Or Not "<<s.empty()<<endl;

    stack<int> p;
    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);
    cout<<"Size "<<p.size()<<endl;
    cout<<"Top Element "<<p.top()<<endl;
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    

}