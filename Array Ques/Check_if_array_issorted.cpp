// To Check Wheather Array is Sorted or Not.
#include <iostream>
using namespace std;
bool issorted(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>=arr[i-1])
        {
        }
        else{
            return 0;
        }
    }
    return 1;
    
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
    if (issorted(arr,n))
    {
        cout<<"Array is Sorted "<<endl;
    }
    else{
        cout<<"Array is Not Sorted "<<endl;
    }
}