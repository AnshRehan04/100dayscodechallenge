#include <iostream>
using namespace std;
int main(){
    int a=10;
    int &r=a;    //Reference Means Both a and r are same with value r
    // It means another name given to a variable .
    cout<<a<<endl;  //10
    r++;
    cout<<a<<endl;  //11
    cout<<r<<endl;  //11
    a++;
    cout<<a<<endl;  //12
    cout<<r<<endl;  //12
}