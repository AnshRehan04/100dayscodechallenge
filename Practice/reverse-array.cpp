// Reverse the elements of the array.
#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[5]={1,2,3,4,5};
    reverse(arr,5);
    printarray(arr,5);
}