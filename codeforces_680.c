#include<stdio.h>
int main()
{
int a[5],i,t[2]={0},sum=0,b[101]={0};
int j=0,t1=0;
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
sum+=a[i];
b[a[i]]++;
}
for(i=1;i<101;i++)
{
if(b[i]>1)
{
if(b[i]<=3)
{
t[j]=i*b[i];
}
else
{
t[j]=i*3;
}
j++;
}
else
t1++;
}
if(t1==100)
{
printf("%d",sum);
}
else
{
if(t[0]>t[1])
{
printf("%d",(sum-t[0]));
}
else
printf("%d",(sum-t[1]));
}
return 0;
}
