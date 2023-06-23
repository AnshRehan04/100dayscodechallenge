#include <iostream>
using namespace std;
int sum(int arr[], int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int size;
    cin>>size;
    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum of the elments of the Array is "<<sum(arr,size);
}