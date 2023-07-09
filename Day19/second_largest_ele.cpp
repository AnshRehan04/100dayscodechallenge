#include <iostream>
#include <limits.h>
using namespace std;
int firstmaxelement(int arr[],int n){
    int max=INT_MIN;
    int maxindex=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            maxindex=i;
        }
        
    }
    return maxindex;
}
int main(){
    int arr[5]={1,4,5,6,7};
    int indexoflargestele=firstmaxelement(arr,5);
    arr[indexoflargestele]=-1;
    int indexofsecondlargest=firstmaxelement(arr,5);
    cout<<"second largest element is "<<indexofsecondlargest; 
}