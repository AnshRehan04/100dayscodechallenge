#include <iostream>
using namespace std;
bool perfectno(int n){
    int ans=0;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            ans+=i;
        }
    }
    if (ans==n)
    {
        return true;
    }
    else{
        return false;
    }
    
    
}
int main(){
    int n;
    cin>>n;
    perfectno(n);
}