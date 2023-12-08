// TO FIND THE INTERSECTION OF ELEMENTS IN AN ARRAY.
#include <iostream> 
using namespace std;
int intersection(int a[],int b[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i]==b[j])
            {
                cout<<a[i];
                i++;
                j++;
            }
            else if (a[i]<b[j])
            {
                i++;
            }
            else{
                j++;
            }
        }
        
    }
    
}
int main(){
    int a[4]={1,2,3,4};
    int b[4]={2,3,4,5};
    intersection(a,b,4);
}