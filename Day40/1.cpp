#include <iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,1,1,1};
    int len=0;
    int sum=0;
    int t=3;
    for (int i = 0; i < 6; i++)
    {
        for ( int j = i; j< 6; j++)
        {
            for (int k = i; i < j; k++)
            {
                if (arr[k]==t)
                {
                    max(len,j-i+1);
                }
            }
            
        }
        
    }
    cout<<len;
    
}