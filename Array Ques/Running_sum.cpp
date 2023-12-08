#include <iostream>
using namespace std;
void runsum(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
        arr[i]=sum;
    }
}
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[20];
    int n;
    cout<<"Enter the size ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    runsum(arr,n);
    print(arr,n);
}