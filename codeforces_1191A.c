#include<stdio.h>
int main()
{
int n,t1;
scanf("%d",&n);
t1=n%4;
if(t1==1)
{
printf("0 A");
}
else if(t1==2)
{
printf("1 B");
}
else if(t1==3)
{
printf("2 A");

}
else
{
printf("1 A");
}



return 0;
}
