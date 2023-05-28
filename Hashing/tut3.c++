#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 3, 2, 1, 3};

    // precompute
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int query;
    cout << "Enter query: ";
    cin >> query;

    cout << "Enter numbers: ";
    while (query--)
    {
        int number;
        cin >> number;

        // fetching
        cout << number << " -> " << mp[number] << endl;
    }

    return 0;
}