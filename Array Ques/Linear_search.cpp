// TO check Element is Present or Not and Return its index
#include <iostream>
using namespace std;
int linearsearch(int arr[],int n,int target){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
            return i;
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
    int target;
    cout<<"Which Element To search ";
    cin>>target;
    cout<<"Element is Present at "<<linearsearch(arr,n,target)<<" index";
}