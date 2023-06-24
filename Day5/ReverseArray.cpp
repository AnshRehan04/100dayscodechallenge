#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,8,9,10};
    reverse(arr,5);
    printArray(arr,5);
}