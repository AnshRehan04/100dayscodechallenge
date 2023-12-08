// TO Move zeroes to End.
#include <iostream>
using namespace std;
void movezeroes(int arr[],int n){
    int i=0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j]!=0)
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }
}
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
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
    movezeroes(arr,n);
    print(arr,n);
}