// To Check the first and last occurence of array
#include <iostream>
using namespace std;
int firstocc(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if (key>arr[mid])
        {
            start=mid+1;
        }
        
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
    
}
int lastocc(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
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
    cout<<"Which Element To search ";
    cin>>key;
    cout<<"First Occurence is at "<<firstocc(arr,n,key)<<endl;
    cout<<"Last Occurence is at "<<lastocc(arr,n,key);
}