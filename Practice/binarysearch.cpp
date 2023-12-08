#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while (s<=e)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<binarysearch(arr,5,5);
}