/*
 * Author @ARDhruvo
 * Initial Completion Date: 19/11/2024
 */

#include <bits/stdc++.h>
using namespace std;

// Write a recursive program to compute nth fibonacci number. 1st and 2nd fibonacci numbers are 1, 1.

#define paragraph cout << endl


void fib(int n1, int n2, int n)
{
    if (n == 1)
    {
        cout << n1 << " ";
    }
    if(n > 0)
    {
        n--;
        fib(n2, n1 + n2, n);
    }
}

int main()
{
    int n = 0;
    cin >> n;
    fib(1, 1, n);
}
