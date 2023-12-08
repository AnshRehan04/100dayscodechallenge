// TO Find a particular key in an array using Linear search.
// #include <iostream>
// using namespace std;
// bool linearsearch(int arr[],int n,int key){
//     for (int i = 0; i <n; i++)
//     {
//         if (arr[i]==key)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[10]={1,3,5,6,7,8,11};
//     bool found=linearsearch(arr,10,-3);
//     if (found)
//     {
//         cout<<"Element is present"<<endl;
//     }
//     else{
//         cout<<"Element is not present ";
//     }
    
// }

// TO FIND THE INDEX OF PARTICULAR ELEMENT.

#include <iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for (int i = 0; i <n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
}
int main(){
    int arr[4]={1,2,2,2};
    cout<<" Element is present at index " <<linearsearch(arr,4,2);
}