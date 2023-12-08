// To return the element which occurs more than N/2 time in an array.
// Brute Force With Time Complexcity =O(n2)
#include <iostream>
#include <map>
using namespace std;
// int majority(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         int count=0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i]==arr[j])
//             {
//                 count++;
//             }
//         }
//         if(count>(n/2)){
//                 return arr[i];
//             }
//     }
//     return -1;
// }
// int main(){
//     int arr[20];
//     int n;
//     cout<<"Enter the size ";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Majority Element is "<<majority(arr,n);
// }

// Better Approach with TC=O(nlogn)+O(n)

int majority(int arr[],int n){
    map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if (it.second>(n/2))
        {
            return it.first;
        }
    }
    return -1;
    
}

// Optimal Approach using moorne algo with TC=O(N);

// int majority(int arr[],int n){
//     int cnt=0;
//     int ele;
//     for (int i = 0; i < n; i++)
//     {
//         if (cnt==0)
//         {
//             cnt=1;
//             ele=arr[i];
//         }
//         else if (arr[i]==ele)
//         {
//             cnt++;
//         }
//         else{
//             cnt--;
//         }
//     }
//     int cnt1=0;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]==ele){
//             cnt1++;
//         }
//         if (cnt1>(n/2))
//         {
//             return ele;
//         }
//     }
//     return -1;

// }
int main(){
    int arr[20];
    int n;
    cout<<"Enter the size ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Majority Element is "<<majority(arr,n);
}
