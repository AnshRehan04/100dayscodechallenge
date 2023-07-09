#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int targetsum;
    cin>>targetsum;
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i]+arr[j]==targetsum)
            {
                count++;
            }
        }
    }
    cout<<"Total Number of pairs are "<<count<<endl;
}