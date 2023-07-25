#include <iostream>
using namespace std;
int setbit(int n,int a){
    int count=0;
    while(n>0 && a>0){
        count++;
        n=n &&(n-1);
        a=a &&(a-1);
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int a;
    cin>>a;
    cout<<setbit(n,a);
}