#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr, int n)
{
    for (int i = n-1; i >= 0; i--)
    {
        bool didSwap = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                didSwap = true;

            }
        }
        if(didSwap == false){
            break;
        }
    }
}

int main()
{
    vector<int> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = arr.size();
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}