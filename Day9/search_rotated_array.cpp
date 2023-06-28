
#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int n, int k) {
    int s = 0, e = n - 1;
    while (s <= e) {
        int mid = (s + e) / 2;

        //if mid points the target
        if (arr[mid] == k) return mid;

        //if left part is sorted:
        if (arr[s] <= arr[mid]) {
            if (arr[s] <= k && k <= arr[mid]) {
                //element exists:
                e = mid - 1;
            }
            else {
                //element does not exist:
                s = mid + 1;
            }
        }
        else { //if right part is sorted:
            if (arr[mid] <= k && k <= arr[e]) {
                //element exists:
                s = mid + 1;
            }
            else {
                //element does not exist:
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9, k = 40;
    int ans = search(arr, n, k);
    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";
    return 0;
}

