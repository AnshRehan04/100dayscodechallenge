#include <iostream>
using namespace std;
bool contain(int arr[],int n){
    for (int i = 0; i <5; i++)
    {
        for (int j = i+1; j <5; j++)
        {
            if (arr[i]==arr[j])
            {
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[5]={1,12,2,3,4};
    if (contain(arr,5))
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
    
}