#include <iostream>
using namespace std;
int getsum(int *arr,int n){
    cout<<"Size is "<<sizeof(arr)<<endl;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
    
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"Sum is "<<getsum(arr,5);
}