// FOR ASCENDING ORDER.

// #include <iostream>
// using namespace std;
// void selectionsort(int arr[],int n){
//     for (int i = 0; i < n-1; i++)
//     {
//         int minindex=i;
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[minindex]>arr[j])  //arr[j]<arr[minidex]
//             {
//                 minindex=j;
//             }
//         }
//         swap(arr[minindex],arr[i]);
//     }
// }
// void printarray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }
// int main(){
//     int arr[5]={61,92,25,19,11};
//     selectionsort(arr,5);
//     printarray(arr,5);
// }

// FOR DESCENDING ORDER.

#include <iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minindex=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[minindex]<arr[j])  //arr[j]>arr[minidex]
            {
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[5]={61,92,25,19,11};
    selectionsort(arr,5);
    printarray(arr,5);
}