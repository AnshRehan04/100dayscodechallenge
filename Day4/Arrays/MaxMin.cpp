#include <iostream>
#include <limits.h>
using namespace std;
int getmax(int arr1[],int n){
    int max=INT_MIN;
    // int max=-1;
    for (int i = 0; i <n; i++)
    {
        if (arr1[i]>max)
        {
            max=arr1[i];
        }
    }
    return max;
}
int getmin(int arr1[],int n){
    int min=INT_MAX;
    // int min=0;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i]<min)
        {
            min=arr1[i];
        }
    }
    return min;
    
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum value is "<<getmax(arr,size)<<endl;
    cout<<"Minimum value is "<<getmin(arr,size);
}