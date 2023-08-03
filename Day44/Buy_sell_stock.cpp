#include <iostream>
#include <limits.h>
using namespace std;
// Brute Force
// int stock(int arr[],int n){
//     int maxi=0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[i]<arr[j])
//             {
//                 maxi=max(maxi,arr[j]-arr[i]);
//             }
//         }
//     }
//     return maxi;
// }

// Optimal Approach
int stock(int arr[],int n){
    int maxi=0;
    int mini=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]-mini);
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
    cout<<"Maximum profit is "<<stock(arr,n);
}
