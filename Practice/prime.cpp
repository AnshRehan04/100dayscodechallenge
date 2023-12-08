#include <iostream>
using namespace std;
bool isprime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return 0;  //0-->Not Prime;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    bool prime=isprime(n);
    if (prime)
    {
        cout<<"It is Prime number "<<endl;
    }
    else{
        cout<<"It is not Prime number ";
    }
}