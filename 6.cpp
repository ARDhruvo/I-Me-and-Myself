/*
 * Author @ARDhruvo
 * Initial Completion Date: 19/11/2024
 */

#include <bits/stdc++.h>
using namespace std;

// Write a recursive program to compute n!

#define paragraph cout << endl

int factorial(int n)
{
    if(n>1)
    {
        return n * factorial(n-1);
    }
}

int main()
{
    int n;
    cin >> n;
    paragraph;
    int fact = factorial(n);
    cout << fact;
}
