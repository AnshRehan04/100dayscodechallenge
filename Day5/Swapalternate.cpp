// #include <iostream>
// using namespace std;
// void swapalternate(int arr[],int n){
//     for (int i = 0; i < n; i+=2)
//     {
//         if (i+1<n)
//         {
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }
// void printarray(int arr[],int n){
//     for (int i = 0; i <n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }
// int main(){
//     int arr[5]={1,4,6,8,9};
//     swapalternate(arr,5);
//     printarray(arr,5);
// }

// Swap Alternate taking input From User.
#include <iostream>
using namespace std;
void swapalternate(int arr[],int size){
    for (int i = 0; i <size; i+=2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
void printarray(int arr[],int size){
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int size;
    cout<<"Enter the number of Element :";
    cin>>size;
    int arr[10];
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    swapalternate(arr,size);
    printarray(arr,size);
}