#include<stdio.h>
int main()
{
int m,n;
scanf("%d%d",&m,&n);
int a[m],i,j,t1=0,t2=0,t3=0,t4=0;
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
t1=log10(a[i])+1;
if(t1>n)
{
for(j=1;j<=t1;j++)
{
t2=a[i]%10;
a[i]=a[i]/10;
if(t2==4 || t2==7)
{
t3++;
}
}
if(t3>n)
{
t4++;
}
t3=0;
}
}
printf("%d",(m-t4));
return 0;
}
