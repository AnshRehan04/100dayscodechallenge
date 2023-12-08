// To print the sum of element of array and stored it in an array.
#include <iostream>
using namespace std;
int runsum(int arr[],int n){
    int sum=0;
    int i=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        arr[i]=sum;
        
    }
    return arr;
    
}
int main(){
    int arr[10]={2,4,5,6,6};
    cout<<runsum(arr,10)<<" ";
}