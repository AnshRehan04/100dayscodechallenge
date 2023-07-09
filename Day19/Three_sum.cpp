#include <iostream>
using namespace std;
int main(){
    int arr[5]={3,2,1,4,5};
    int targetsum=6;
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j =i+1; j <5; j++)
        {
            for (int k = j+1; k < 5; k++)
            {
                if (arr[i]+arr[j]+arr[k]==targetsum)
                {
                    count++;
                }
                
            }
        }
    }
    cout<<"Total No. Of Pairs "<<count;
}