#include <iostream>
using namespace std;
int main(){
    int num=5;
    int *ptr=&num;
    cout<<"Address of num is "<<ptr<<endl;
    cout<<"Value is "<<*ptr<<endl;

    cout<<"Address "<<&num<<endl;
    
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    //Address of 0th Index.
    cout<<"Address is "<<arr<<endl;
    cout<<"Address is "<<&arr<<endl;
    cout<<"Address is "<<&arr[0]<<endl;
    cout<<"Address is "<<p<<endl;

    //Value at 0th Index.
    cout<<"Value at 0th Index "<<*p<<endl;

    //Value at 1st Index.
    cout<<"Value at 1st Index "<<*(arr+1)<<endl;
    cout<<"Value at 2nd Index "<<*(arr+2)<<endl;
    cout<<"Value at 3rd Index "<<*(arr+3)<<endl;

    //*(arr)-->0th index value *(arr)+1-->1+1-->2
    cout<<"Value is "<<(*arr)+1<<endl;     //2
    cout<<"Value is "<<(*arr)+2<<endl;     //3
    cout<<"Value is "<<(*arr)+4<<endl;     //5
}