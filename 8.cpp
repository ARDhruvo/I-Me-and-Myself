/*
 * Author @ARDhruvo
 * Initial Completion Date: 19/11/2024
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Write a recursive program to determine whether a given integer is prime or not

#define paragraph cout << endl


void prime(int n, int i)
{
    if (i > sqrt(n))
    {
        cout << "Prime";
    }
    else
    {
        if(n%i != 0)
        {
            prime(n, i+1);
        }
        else
        {
            cout << "Not prime";
        }
    }
}

int main()
{
    int n = 0;
    cin >> n;
    prime(n, 2);
}
