#include <iostream>
using namespace std;
void printarray(int arr[],int size){
    //printing the Array
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=3;
    int first[3]={1,2,3};
    printarray(first,3);

    n=15;
    int second[15]={3,7};
    printarray(second,15);

    n=10;
    int Third[10]={0};
    printarray[Third,10];
}