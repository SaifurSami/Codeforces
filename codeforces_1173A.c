#include<stdio.h>
int main()
{
int x,y,z,i,t1;
scanf("%d%d%d",&x,&y,&z);
if(x>y)
{
t1=y+z;
if(x>t1)
{
printf("+");
}
else
printf("?");

}
else if(x<y)
{
t1=x+z;
if(y>t1)
{
printf("-");
}
else
printf("?");
}
else
{
if(z==0)
{
printf("0");
}
else
printf("?");
}








return 0;
}
