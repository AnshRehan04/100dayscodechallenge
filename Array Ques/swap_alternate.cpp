// To Swap the ELement of the array.
#include <iostream>
using namespace std;
void swapalternate(int arr[],int n){
    for (int i = 0; i < n; i=i+2)
    {
        if (i+1<n)
        {
            swap(arr[i],arr[i+1]);
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
    swapalternate(arr,n);
    print(arr,n);
}