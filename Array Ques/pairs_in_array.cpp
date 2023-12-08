#include <iostream>
using namespace std;
void pairarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int curr=arr[i];
        for (int j= i+1; j <n; j++)
        {
            cout<<(curr)<<","<<(arr[j]);
        }
    }
    cout<<endl;
}
int main (){
    int arr[10];
    int n;
    cout<<"Enter the size ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    pairarr(arr,n);
}