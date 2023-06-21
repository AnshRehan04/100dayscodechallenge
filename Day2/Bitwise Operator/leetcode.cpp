// 1281. Subtract the Product and Sum of Digits of an Integer
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
        int prod=1;
        int sum=0;
        while(n!=0){
            int rem=n%10;
            prod=prod*rem;
            sum=sum+rem;
            n=n/10;
        }
        cout<<(prod-sum)<<endl;
};