//Problem link: https://cses.fi/problemset/task/1092/


//Example 1

//Input:
//7
//Output:
//YES
//4
//1 2 4 7
//3
//3 5 6


//Example 2

//Input:
//6
//Output:
//NO

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
 
int main()
{
 
    ll n;
    cin >> n;
    vector<ll> S1;
    vector<ll> S2;
 
    ll total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += i;
    }
 
    ll half = total / 2;
    ll gSum = 0;
 
    if (total%2==0)
    {
        cout << "YES" << endl;
 
        for (ll i = n; i >= 1; i--)
        {
 
            if (gSum + i <= half)
            {
                gSum += i;
                S1.push_back(i);
            }
            else
            {
                S2.push_back(i);
            }
        }
 
        ll S1_size = S1.size();
        ll S2_size = S2.size();
 
        cout << S2_size << endl;
        for (int i = S2_size - 1; i >= 0; i--)
        {
            cout << S2[i] << " ";
        }
        cout << endl;
 
        cout << S1_size << endl;
        for (int i = S1_size - 1; i >= 0; i--)
        {
            cout << S1[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
 
    return 0;
}
