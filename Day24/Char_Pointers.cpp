#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    char ch[5]="abcd";

    cout<<arr<<endl;  //Address of 0th index will be printed.
    cout<<ch<<endl;

    char *p=&ch[0];
    // Prints Entire String.
    cout<<p<<endl;

    int temp='z';
    int *ptr=&temp;
    cout<<ptr<<endl;  //Address will be printed.

    char b[5]="abcd";
    char *p2=&b[2];
    cout<<"Address is "<<p2<<endl;
    cout<<"Value is "<<*p2<<endl;

}