#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abcdabehf";

    // precompute
    // int hash[26] = {0}; // If question specify that the characters are in lowercase
    int hash[256] = {0}; // If question does not specify about the characters
    for (int i = 0; i < str.size(); i++)
    {
        // hash[str[i] - 'a'] += 1; // If question specify that the characters are in lowercase
        hash[str[i]] += 1; // If question does not specify about the characters
    }

    int query;
    cout << "Enter query: ";
    cin >> query;

    cout << "Enter characters: ";
    while (query--)
    {
        char ch;
        cin >> ch;

        // fetching
        // cout << ch << " -> " << hash[ch - 'a'] << endl; // If question specify that the characters are in lowercase
        cout << ch << " -> " << hash[ch] << endl; // If question does not specify about the characters
    }

    return 0;
}