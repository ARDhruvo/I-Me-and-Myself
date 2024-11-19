/*
 * Author @ARDhruvo
 * Initial Completion Date: 19/11/2024
 */

#include <bits/stdc++.h>
using namespace std;

// Suppose you are given an array of integers in an arbitrary order. Write a recursive solution to find the maximum element from the array. 

#define paragraph cout << endl

int arr[100] = {0, 0};

int maxFind(int i, int max, int n)
{
    if(i < n)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        max = maxFind(i+1, max, n);
    }
    return max;
}

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m = arr[0];
    cout << maxFind(1, m, n);
}
