#include <iostream>
using namespace std;
int reverse(int n){
    int sum=0;
    while (n!=0)
    {
        int rem=n%10;  //123=123%10=3  12%10=2 1%10=1
        sum=sum*10+rem;//sum=0*10+3=3  3*10+2=32 32*10+1=321
        n=n/10;        //123/10=12     12/10=1    1/10=0 loops terminate
    }
    return sum;
}
int main(){
    int n=124;
    cout<<"Reverse of number is "<<reverse(n);
}