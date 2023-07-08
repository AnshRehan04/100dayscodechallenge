// Take input of 2D array.
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[3][4];

//     // Taking input.
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     // for Printing Output.
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }
// }
// Defined elements.
#include <iostream>
using namespace std;
int main(){
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
