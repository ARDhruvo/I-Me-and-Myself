/*
 * Author @ARDhruvo
 * Initial Completion Date: 19/11/2024
 */

#include <bits/stdc++.h>
using namespace std;

// Write a recursive function to print an array in the following order. [0] [n-1] [1] [n-2] ......... ......... [(n-1)/2] [n/2]

#define paragraph cout << endl

int arr[100] = {0, 0};

void spiralPrint(int n, int i)
{
    cout << arr[i] << " " << arr[n - 1 - i] << endl;
    if (i < (n - 1) / 2)
    {
        spiralPrint(n, i + 1);
    }
}

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    spiralPrint(n, 0);
}