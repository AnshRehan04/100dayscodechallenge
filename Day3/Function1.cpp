// #include <iostream>
// using namespace std;
// int area(int r){
//     int area1=3.14*r*r;
//     return area1;
// }
// int main(){
//     int r;
//     cout<<"Enter radius"<<endl;
//     cin>>r;
//     int ar=area(r);
//     cout<<ar<<endl;
// }

//Factorial of a number
// #include<iostream>
// using namespace std;

// int factorial(int x)
// {
//     int fac = 1;
//     if (x == 0 || x == 1)
//         return fac;
//     for(int i=1;i<=x;i++)
//         fac = fac*i;
//     return fac;
// }

// int main()
// {
//     int x;
//     cout<<"Enter a no. ";
//     cin>>x;
//     cout << factorial(x) << "\n";
//     return 0;
// }				

//Age for Vote
// #include<iostream>
// using namespace std;
// int vote(int age){
//     if (age>18)
//     {
//         cout<<"You can Vote";
//     }else{
//         cout<<"You can't Vote";
//     }
//     // return vote(age);
    
// }
// int main(){
//     int age;
//     cout<<"Enter the age: ";
//     cin>>age;
//     vote(age);
//     cout<<vote(age);
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int max_of_four(int a,int b,int c,int d){
    if (a>b && a>>c && a>d) {
        cout<<a;
    
    }else if (b>a && b>c && b>d) {
        cout<<b;
    }else if (c>a && c>b && c>d) {
        cout<<c;    
    }else {
        cout<<d;
    }
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    max_of_four(a,b,c,d);  
    cout<<max_of_four(a, b, c,d); 
    
}
