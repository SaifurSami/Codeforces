#include<stdio.h>
int main()
{
int a,t1=0,x;
scanf("%d",&a);
fuck:
{
a++;
x=a;
int b[4],c[10]={0},i;
for(i=1;i<=4;i++)
{
b[i-1]=x%10;
x=x/10;
c[b[i-1]]++;
if(c[b[i-1]]>1)
{
goto fuck;
}
}
}
printf("%d",a);
return 0;

}
