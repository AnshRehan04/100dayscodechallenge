#include <iostream>
using namespace std;
int consecutive(int arr[],int n){
    int count=0;
    int maxi=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            count++;
        }
        else{
            count=0;
        }
        maxi=max(maxi,count);
    }
    return maxi;
    
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
    cout<<"The Maxium consecutive 1's are "<<consecutive(arr,n);
}