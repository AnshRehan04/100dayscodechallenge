#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,10};
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1;j < 5; j++)
        {
            for (int k = i; k<=j ; k++)
            {
                // cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                cout<<arr[k]<<" "<<endl;
                cout<<endl;
                sum+=arr[k];
            }
            
        }
    }
    
}