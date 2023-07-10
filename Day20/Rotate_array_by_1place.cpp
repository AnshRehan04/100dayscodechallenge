#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};   //{2,3,4,5,1}
    int temp=arr[0];
    for (int i = 1; i < 5; i++)
    {
        arr[i-1]=arr[i];   //arr[0]=arr[1]={2}  arr[1]=arr[2]={2,3} arr[2]=arr[3]={2,3,4} arr[3]=arr[4]={2,3,4,5} arr[4]=temp ={2,3,4,5,1};
    }
    arr[4]=temp;
    cout<<arr[5]<<" ";
}