#include <iostream>
using namespace std;
int nfib(int n){
    int a=0;
    int b=1;
    int sum=0;
    if (n==0)
    {
        return 0;
    }else if (n==1)
    {
        return 1;
    }
    for (int i = 0; i < n-3; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<"nth fibnocii term is "<<nfib(n);
}