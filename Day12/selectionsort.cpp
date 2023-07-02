#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for (int i = 0; i < n-1; i++)
    {
        int minindex=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[minindex]>arr[j])
            {
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}
