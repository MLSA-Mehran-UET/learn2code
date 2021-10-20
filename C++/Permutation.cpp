#include <bits/stdc++.h>
using namespace std;



int main()
{
 long long n;
 cin >>n;
 long long p[n];
 int count=0;
 int flag = 0;
 long long i;
 for(i=1; i<=n; i++)
 {
    if(i%2==0)
    {
        p[count] = i;
        count++;
    }
 }
 for( i=1; i<=n; i++)
 {
    if(i%2!=0)
    {

        p[count] =i;
        count++;
    }
 }


 for( i=0; i<n-1; i++ )
 {
     if(p[i] == p[i+1]-1 || p[i] == p[i+1]+1 )
     {
        flag = 1;
    }
 }



 if(flag==0)
 {
    for(long long j=0; j<n; j++)
    {
        cout << p[j]<< " ";
    }
 }
 else{
    cout <<"NO SOLUTION";
 }
}
