//To Print the sum of elements in an Array.
#include <iostream>
using namespace std;
int sum(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[10]={1,2,3,4,5};
    cout<<"Sum of array is: "<<sum(arr,10);
}
