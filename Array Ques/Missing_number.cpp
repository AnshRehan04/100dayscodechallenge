// To Find Out the Missing Number in an Array.
#include <iostream>
using namespace std;
int missingnumber(int arr[],int n,int m){
    int sum=m*(m+1)/2;
    int sum1=0;
    for (int i = 0; i < n; i++)
    {
        sum1=sum1+arr[i];
    }
    return (sum-sum1);
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
    int m;
    cout<<"Enter the Number ";
    cin>>m;
    cout<<"Missing number is "<<missingnumber(arr,n,m);
}