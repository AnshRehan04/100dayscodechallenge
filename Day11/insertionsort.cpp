#include <iostream>
using namespace std;
void insertionsort(int arr[],int n){
    int temp;
    for (int i = 1; i < n; i++)
    {
        temp=arr[i];
        int j=i-1;
        for ( ; j>=0; j--)
        {
            if (arr[j]>temp)
            {   //shift the position of array.
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[5]={12,1,30,11,2};
    insertionsort(arr,5);
    printarray(arr,5);
}