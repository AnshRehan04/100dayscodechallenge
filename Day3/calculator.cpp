// Calculator
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter first no :";
    cin>>a;
    cout<<"enter second no :";
    cin>>b;
    char op;
    cout<<"enter the operator :";
    cin>>op;
    switch (op)
    {
    case '+':
    cout<<(a+b)<<endl;
        break;
    case '-':
    cout<<(a-b)<<endl;
        break;
    case '*':
    cout<<(a*b)<<endl;
        break;
    case '/':
    cout<<(a/b)<<endl;
        break;
    
    default:
        break;
    }

}