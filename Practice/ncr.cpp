#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for (int i = 1; i < n; i++)
    {
        
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r){
    int num=factorial(n);
    int demo=factorial(r)*factorial(n-r);
    return num/demo;
}
int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    cout<<"nCr is "<<ncr(n,r);
}