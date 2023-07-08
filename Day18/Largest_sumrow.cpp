// To Print the maximum row sum.
#include <iostream>
#include <limits.h>
using namespace std;
int largestsum(int arr[][3],int i,int j){
    int rowindex=-1;
    int max=INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum=sum+arr[i][j];
        }
        if (sum>max)
        {
            max=sum;
            rowindex=i;
        }
        
    }
    cout<<"Maximum sum is "<<max<<endl;
    cout<<"Maxmimum row index is "<<rowindex;    
}
int main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }
    largestsum(arr,3,3);
}