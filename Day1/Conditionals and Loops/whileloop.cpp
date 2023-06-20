// Print Integers from 1 to n
#include <iostream>
using namespace std;
int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         cout<<i<<endl;
//         i=i+1;
//     }
// }

// Sum of numbers from 1 to n;
// int n;
// cin>>n;
// int sum=0;
// int i=1;
// while (i<=n)
// {
//     sum=sum+i;
//     i=i+1;
// }
// cout<<sum;
// }

// Sum of even numbers from 1 to n;
// int n;
// cin>>n;
// int sum=0;
// int i=2;
// while (i<=n)
// {
//     sum=sum+i;
//     i=i+2;
// }
// cout<<"Sum of Even no. from 1 to n is :"<<sum;
// }

// To check wheather a no is prime or not
int n;
cin>>n;
int i=2;
while (i<n)
{
    if (n%i==0)
    {
        cout<<"Prime for i = "<<i<<endl;

    }else{
        cout<<"Not prime for i = "<<i<<endl;
    }
    i=i+1;
}
}


