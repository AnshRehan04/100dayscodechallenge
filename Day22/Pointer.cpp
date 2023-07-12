#include <iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;
    cout<<"Adress of num is "<<&num<<endl;

    int *ptr=&num;
    cout<<"Address is "<<ptr<<endl;    //Address will be printed.
    cout<<"Value is "<<*ptr<<endl;     //Value 5 will be printed.

    double b=4.2;
    cout<<b<<endl;
    
    double *p=&b;
    cout<<"Address is "<<p<<endl;    //Address will be printed.
    cout<<"Value is "<<*p<<endl;     //Value 4.2 will be printed.

    cout<<"Size of Integer is "<<sizeof(num)<<endl;
    cout<<"Size of Pointer is "<<sizeof(ptr)<<endl;
    cout<<"Size of Double Pointer is "<<sizeof(p)<<endl;

    int *p1=0;
    p1=&num;
    cout<<p1<<endl;  // address
    cout<<*p1<<endl; //5

    int i=3;
    int a=i++;
    cout<<i<<endl;
    
    int *p3=&i;
    cout<<"Before "<<i<<endl;
    (*p3)++;
    cout<<"After "<<i<<endl;
}