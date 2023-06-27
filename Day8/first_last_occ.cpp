#include <iostream>
using namespace std;
int firstocc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=0;
    while (s<=e)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if (key>arr[mid])  //right side
        {
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while (s<=e)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if (key>arr[mid])  //right side
        {
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int main(){
    int arr[8]={1,2,3,3,5};
    cout<<"First occurence is at index "<<firstocc(arr,8,10)<<endl;
    cout<<"last occurence is at index "<<lastocc(arr,8,3);
}