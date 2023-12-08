#include <iostream>
#include <set>
using namespace std;
int duplictate(int arr[],int n){
    int i=0;   // 2 1 2
        for (int j = 1; j < n; j++)
        {
            if (arr[j]!=arr[i])
            {
                arr[i+1]=arr[j];
                i++;
            }
        }
        return i+1;
    }
    

int main(){
    int arr[10];
    int n;
    cout<<"Enter number ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<duplictate(arr,n);
}