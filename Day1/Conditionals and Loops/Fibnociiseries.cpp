#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i <=n; i++)
    {
        int sum=a+b;
        cout<<sum<<" ";
        a=b;    //a=0,b=1,sum=a+b=1
        b=sum;  //a=1(a=b),b=1(b=sum) sum=(a+b)=2
                //a=1(a=b),b=2(b=sum) sum=(a+b)=3
                // a=2(a=b),b=3(b=sum) sum=(a+b)=5
    }
}

    