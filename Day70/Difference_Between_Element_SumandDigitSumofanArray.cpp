#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,15,6,3};
    int sum=0;
    int digsum=0;
    for (int i = 0; i <5; i++)
    {
        sum+=arr[i];
        while (arr[i]!=0)
        {
            int rem=arr[i]%10;
            digsum+=rem;
            arr[i]/=10;
        }
    }
    cout<<(sum-digsum);
    
}