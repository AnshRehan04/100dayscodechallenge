// To Check the Maximum and Minimum of Array.
#include <iostream>
#include <limits.h>
using namespace std;
int max(int arr[],int n){
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }        
    }
    return max;
}
int min(int arr[],int n){
    int min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }        
    }
    return min;
}

int main(){
    int arr[20];
    int n;
    cout<<"Enter the size ";
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum Element is "<<max(arr,n)<<endl;
    cout<<"Minimum Element is "<<min(arr,n);
}