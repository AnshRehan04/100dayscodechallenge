#include <iostream>
using namespace std;
bool search(int arr[],int n,int key){
    for (int i = 0; i <3; i++)
    {
        if (arr[i]==key)   
        {
            return 1;  //1-->found
        }
    }
    return 0;  //0-->Not Found;
}
int main(){
    int arr[5]={1,2,7,9,11};
    int key;
    cout<<"Which Element to search: "<<endl;
    cin>>key;
    bool found=search(arr,5,key);
    if (found)
    {
        cout<<"Element is Present "<<endl;
    }
    else{
        cout<<"Element is Not Present "<<endl;
    }
    
}