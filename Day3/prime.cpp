#include <iostream> 
using namespace std;
//1-->prime
//0-->Not Prime
bool isPrime(int n){
    for (int i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
    
}
int main(){
    int n;
    cin>>n;
    if (isPrime(n))
    {
        cout<<"Is a Prime";
    }
    else{
        cout<<"Is not a Prime";
    }
    return 0;
}