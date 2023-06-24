#include <iostream>
using namespace std;
void update(int arr[],int n){
    cout<<"Printing update function "<<endl;
    //update the Value;
    arr[0]=120;
    for (int i = 0; i <3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Going Back To Main Function "<<endl;
}
int main(){
    int arr[3]={1,2,3};
    update(arr,3);
    cout<<"Printing the main function "<<endl;
    for (int i = 0; i <3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Done"<<endl;
    
}