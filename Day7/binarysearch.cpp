#include <iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        //Right side
        else if (key>arr[mid])
        {
            start=mid+1;
        }
        else{
            // Left side.
            end=mid-1;
        }
        mid=(start+end)/2;
    }
}
int main(){
    int arr[5]={3,5,7,9,10};
    int search=binarysearch(arr,5,1);
    cout<<"Index of key is at "<<search<<" ";
}