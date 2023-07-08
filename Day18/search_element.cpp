// To search element is present or not.
#include <iostream>
using namespace std;
bool ispresent(int arr[][4],int n,int i,int j){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j]==n)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
    }
    int n;
    cout<<"Enter the element ";
    cin>>n;
    if (ispresent(arr,n,3,4))
    {
        cout<<"Element Present "<<endl; 
    }
    else{
        cout<<"Element Not Present ";
    }
    
}