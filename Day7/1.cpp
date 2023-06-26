#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(key==arr[mid]){
        return mid;
    }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
        return -1;
}
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int arr[20];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int search=binarysearch(arr,n,key);
    cout<<search;
    return 0;
}
