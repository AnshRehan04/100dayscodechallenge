// To Print the row wise sum
// 1 1 1 1 -->4
// 1 1 1 1 -->4
// 1 1 1 1 -->4
#include <iostream>
using namespace std;
void sum(int arr[][4],int i,int j){
    cout<<"Printing sum ";
    for (int j= 0; j < 3; j++)
    {
        int sum=0;
        for (int i = 0; i < 4; i++)
        {
            sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
    
}
int main(){
    int arr[3][4];
    // Taking input.
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            cin>>arr[j][i];
        }
    }
    // for Printing Output.
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }
    sum(arr,3,4);
}