// Pivot element index. 
#include <iostream>
using namespace std;
int pivot(int a[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while (s<e)
    {
        if (a[mid]>=a[0])
        {
            s=mid+1;  //Line 1
        }
        else{
            e=mid;   //Line 2;
        }
        mid=(s+e)/2;
    }
    return s;
}
int main(){
    int a[7]={9,10,11,12,3,4,5};
    cout<<"Pivot element index is at "<<pivot(a,7);
}