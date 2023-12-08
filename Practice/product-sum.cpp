// To return the difference of product and sum of element.
#include <iostream>
using namespace std;
int sumprod(int n){
    int prod=1;
    int sum=0;
    while (n!=0)
    {
        int rem=n%10;
        prod=prod*rem;
        sum=sum+rem;
        n=n/10;
    }
    int prosum=prod-sum;
    return prosum;
}
int main(){
    int n=125;
    cout<<sumprod(n);
}