/*
 * Author @ARDhruvo
 * Initial Completion Date: 19/11/2024
 */

#include <bits/stdc++.h>
using namespace std;

// You will be given an array of integers, write a recursive solution to print it in reverse order.

#define paragraph cout << endl

vector<int> inp;

void revPrint(int n)
{

    cout << inp[n] << " ";
    if (n > 0)
    {
        n--;
        revPrint(n);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        inp.push_back(in);
    }
    paragraph;
    n--;
    revPrint(n);
}
