#include <iostream>
using namespace std;
bool palidrome(char a[],int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        if (a[s]!=a[e])
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int length(char name[]){
    int count=0;
    for (int i = 0; name[i]!='\0'; i++)
    {
        count++;
    }
}
int main(){
    char name[20];
    cin>>name;
    int len=length(name);
    cout<<"Palidrome or Not "<<palidrome(name,len);
}