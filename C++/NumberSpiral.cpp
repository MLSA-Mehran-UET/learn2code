//Problem link: https://cses.fi/problemset/task/1071/
//Example

//Input:
//3
//2 3
//1 1
//4 2

//Output:
//8
//1
//15

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int T;
    cin >> T;
 
    long long i;
    long long j;
    while (T--)
    {
        cin >> i >> j;
 
        long long x = 0;
        if (i == j)
        {
            x = (i * i) - (i - 1);
        }
        else if (i == 1 && j % 2 == 0)
        { //even
            x = ((j - 1) * (j - 1)) + 1;
        }
        else if (i == 1 && j % 2 != 0)
        { //odd j=3// matrix[0][2]
            x = j * j;
        }
        //firs column
        else if (j == 1 && i % 2 == 0)
        { //even
            x = i * i;
        }
        else if (j == 1 && i % 2 != 0)
        { //odd
            x = (i - 1) * (i - 1) + 1;
            //rest of the j matrix
        }
        else if (j > i && j % 2 != 0)
        { // j=3 and i=2; matrix[1][2]
            //   matrix[i - 1][j - 1] = matrix[i - 2][j - 1] - 1;
            x = (j * j) - (i - 1);
        }
        else if (j > i && j % 2 == 0)
        { // j=3 and i=2; matrix[1][2])
            // matrix[i - 1][j - 1] = matrix[i - 2][j - 1] + 1;
            x = (j - 1) * (j - 1) + (i);
        }
        //rest of the i matrix
        else if (i > j && i % 2 != 0)
        { // i=3 and j=2; matrix[2][1]
            // matrix[i - 1][j - 1] = matrix[i - 1][j - 2] + 1;
            x = (i - 1) * (i - 1) + j;
        }
        else if (i > j && i % 2 == 0)
        { // i=3 and j=2; matrix[2][1]
            x = (i * i) - (j - 1);
        }
 
        cout << x << endl;
    }
}
