#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,10};
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j =i+1; j < 5; j++)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" "<<endl;
            count++;
        }
    }
    cout<<"Total number of pairs are "<<count<<endl;
}