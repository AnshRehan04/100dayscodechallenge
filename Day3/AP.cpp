#include <iostream>
using namespace std;
int ap(int n){
    int nTerm=3*n+7;
    return nTerm;
}
int main(){
    int n;
    cin>>n;
    int nTerm=ap(n);
    cout<<"Nth term is "<<nTerm;
}