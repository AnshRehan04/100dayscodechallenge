#include <iostream>
using namespace std;
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while (s<e)
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
}
int getlength(char name[]){
    int count=0;
    for (int i = 0;name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
int main(){
    char name[10];
    cout<<"Your name is "; 
    cin>>name;
    // cout<<name;
    int length=getlength(name);
    reverse(name,length);
    cout<<"Your name is "<<name;
}