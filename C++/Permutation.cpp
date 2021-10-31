#include <bits/stdc++.h>
using namespace std;



int main()
{
 long long n;
 //take input; n is the number whom permutation has to find
 cin >>n;
 long long p[n];
 int count=0;
 int flag = 0;
 long long i;
 
 // loop to add even numbers inside p[].
 for(i=1; i<=n; i++)
 {
    if(i%2==0)
    {
        p[count] = i;
        count++;
    }
 }
 
 // loop to add odd numbers inside p[] 
 for( i=1; i<=n; i++)
 {
    if(i%2!=0)
    {

        p[count] =i;
        count++;
    }
 }


 // Now by comparing elements inside p[], we find out if the permutation of n is possible or not.
 for( i=0; i<n-1; i++ )
 {
     if(p[i] == p[i+1]-1 || p[i] == p[i+1]+1 )
     {
        flag = 1;
    }
 }



 // from above comparision flag=0 means permutation is possible.
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
