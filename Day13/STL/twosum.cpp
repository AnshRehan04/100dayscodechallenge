#include <iostream>
using namespace std;
int main(){
    int arr[3]={1,2,3};
    int target=5;
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            if (arr[i]+arr[j]==target)
            {
                cout<<"{"<<arr[i]<<" "<<arr[j]<<"}";
            }
            
        }
        
    }
    
}