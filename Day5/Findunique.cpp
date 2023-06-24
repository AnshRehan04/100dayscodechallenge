// We have to Find the Unique Element in an Array.
// #include <iostream>
// using namespace std;
// int unique(int arr[],int n){
//     int ans=0;
//     for (int i = 0; i <n; i++)
//     {
//         ans=ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     int arr[7]={1,1,2,4,4,2,11};
//     cout<<"unique element is "<<unique(arr,7);
// }

// We have to Find the Unique Element in an Array by taking input from user.
#include <iostream>
using namespace std;
int unique(int arr[],int size){
    int ans=0;
    for (int i = 0; i <size; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int size;
    cout<<"Enter the size of the array ";
    cin>>size;
    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Unique Element is "<<unique(arr,size);
}
