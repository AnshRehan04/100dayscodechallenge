#include <iostream>
using namespace std;
int main(){
    int a=2;
    int b=5;
    int c=(a&b);   //AND operator-->0
    int d=(a|b);   //OR operator-->7
    int e=(~a);   //NOT operator-->-3
    int f=(a^b);  //XOR operator-->7
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;
}