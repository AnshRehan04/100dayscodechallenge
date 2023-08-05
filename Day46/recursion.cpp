#include <iostream>
using namespace std;
void sum(int n){
    if (n>0)
    {
        // sum(n-1);
        // cout<<n;   //here output will be 1 2 3 

        cout<<n;
        sum(n-1);    //here output will be 3 2 1
    }
}
int main(){
    int a=3;
    sum(3);
}