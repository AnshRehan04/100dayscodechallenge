#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int i = 1;
    // for (int i = 1; i <=n; i++)
    // {
    //     cout<<i<<endl;
    // }
    for (; ; )
    {
        if (i <=n)
        {
            cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }
    
}