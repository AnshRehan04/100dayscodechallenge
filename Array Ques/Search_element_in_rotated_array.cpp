// TO Search Element in ROtated Array.
#include <iostream>
using namespace std;
int rotatedarray(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int  mid=(s+e)/2;
    while (s<=e){
        if (arr[mid]==key)
        {
            return mid;
        }
        if (arr[s]<=arr[mid])   //Left Part Is sorted
        {
            if (key>=arr[s] && key<=arr[mid])
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else {
            if (arr[s]<=arr[mid])  //right Part is Sorted
            {
                if (key>=arr[s] && key<=arr[mid])
                {
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
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
    cout<<"Which Element to search ";
    cin>>key;
    cout<<rotatedarray(arr,n,key);
}