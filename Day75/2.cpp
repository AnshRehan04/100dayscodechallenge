#include <iostream>
using namespace std;
int pair1(int num[],int n,int key){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++){
        if (num[i]+num[j]<key && i<j)
        {
            count++;
        }
    }
    
    return count;
}
}
int main(){
    int num[10];
    int n;
    cout<<"Enter the size ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
    }
    int key;
    cout<<"Enter the key ";
    cin>>key;
    cout<<pair1(num,n,key);
}