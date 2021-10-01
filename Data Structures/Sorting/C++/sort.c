#include<stdio.h>
void main()
{
int *a;
int n,i,s=0,j;
printf("Enter the number of terms");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
if(a==NULL)
{
printf("mem no allocated");
}
else
{
printf("MEM is allocated");
}
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]<a[j])
{
printf("%d"
}
