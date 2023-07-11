#include <iostream>
using namespace std;
void zigzag(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        if (i%2==0 && arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
        else if (i%2==1 && arr[i]<arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
int main(){
    int arr[7]={4,3,7,8,6,2,1};
    zigzag(arr,7);
    printarray(arr,7);

}