#include <iostream>
using namespace std;
int main(){
    int a=123;
    int size=sizeof(a);
    cout<<"Size of a is "<<size<<endl;
    char b='v';
    int size1=sizeof(b);
    cout<<"Sie of b is "<<size1<<endl;
    bool c=true;
    int size2=sizeof(c);
    cout<<"Size of c is "<<size2<<endl;
    float f=1.2;
    int size3=sizeof(f);
    cout<<"Size of f is"<<size3<<endl;
}