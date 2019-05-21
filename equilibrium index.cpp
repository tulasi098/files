#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n,flag=0;
scanf("%d",&n);
int i,j,a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int leftsum=0,rightsum=0;
for(i=1;i<n;i++)
{
for(j=0;j<i;j++)
leftsum+=a[j];
for(j=i+1;j<n;j++)
rightsum+=a[j];
if(leftsum==rightsum)
{
flag=1;
printf("%d %d\n",i,leftsum);
   break;
}
leftsum=rightsum=0;
}
if(flag==0)
printf("0 0\n");
}
}


