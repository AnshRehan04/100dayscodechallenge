// TO Find the element using binary search.
#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
    
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
    int key;
    cout<<"Enter the Element to search ";
    cin>>key;
    cout<<"Element is at "<<binarysearch(arr,n,key);
}