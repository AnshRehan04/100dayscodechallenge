// Peak Element in an array
#include <iostream>
using namespace std;
int peakelement(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while (start<=end)
    {
        if (arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=(start+end)/2;
    }
    return start;
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
    cout<<peakelement(arr,n);
}