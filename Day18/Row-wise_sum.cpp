// To Print the row wise sum
// 1 1 1 1 -->4
// 1 1 1 1 -->4
// 1 1 1 1 -->4
#include <iostream>
using namespace std;
void sum(int arr[][4],int i,int j){
    cout<<"Printing sum ";
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int j = 0; j < 4; j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
    
}
int main(){
    int arr[3][4];
    // Taking input.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
    }
    // for Printing Output.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    sum(arr,3,4);
}