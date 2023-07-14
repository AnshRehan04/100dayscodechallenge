#include <iostream>
using namespace std;
int main(){
/*
    int arr[10];
    cout<<"Address of first memory block is "<<arr<<endl;
    cout<<"Address of first memory block is "<<&arr[2]<<endl;

    int arr1[10]={1,2,3,4};
    
    cout<<"Address of 2nd index is "<<&arr1[1]<<endl;;
    cout<<"Value at 1st index is "<<*arr1<<endl;     //1
    cout<<"Value at 2nd index is "<<*(arr1+1)<<endl; //2
    cout<<"Value at 3rd index is "<<*(arr1+2)<<endl; //3
    cout<<"Value at 4th index is "<<*(arr1+3)<<endl; //4

    cout<<"Value is "<<(*arr1)+2<<endl;  //3

    int a[10]={1,2,33,4,5,66,2};
    cout<<"Value at 3rd index "<<a[3]<<endl;  //4
    cout<<"Value at 3rd index "<<*(a+3)<<endl;  //4

    int *p=&a[0];
    cout<<"Value is "<<*p<<endl;  //1
    cout<<"Address is "<<p<<endl;  //Address at index 0
    cout<<"Address is "<<&a[0]<<endl;  //Address at index 0

    int temp[100];
    cout<<"Size is "<<sizeof(temp)<<endl;

    int *ptr=&temp[0];  
    cout<<"Value is "<<*ptr<<endl;  //Garbage value
    cout<<"Address is "<<ptr<<endl; 

    int size=sizeof(ptr);
    int size1=sizeof(*ptr);
    int size2=sizeof(&ptr);
    cout<<"Size is "<<size<<endl;   //size of pointer.
    cout<<"Size is "<<size1<<endl;   //size of pointer.
    cout<<"Size is "<<size2<<endl;   //size of pointer.
*/
    
    // int b[10];
    // int *ptr2=b;  //*ptr2 will store value inside 0th index Garbage value.
    // "Ways to Print Address at 0th index"
    /* cout<<ptr2<<endl;
    cout<<b<<endl;
    cout<<&b[0]<<endl;
    */
    // cout<<"Address of pointer "<<&ptr2<<endl;
    // cout<<"Address of pointer "<<ptr2<<endl;

    int arr[10];
    int *ptr=&arr[0];
    cout<<"Before "<<endl; 
    cout<<ptr<<endl;   //Address at 0th index will be printed.
    ptr=ptr+1;     //(0th+1=1st Index Address).
    cout<<"After "<<endl;
    cout<<ptr<<endl;   //Address at 1st index will be printed.

}