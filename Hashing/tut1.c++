#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 3, 2, 1, 3};

    // precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
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
        cout << number << " -> " << hash[number] << endl;
    }

    return 0;
}