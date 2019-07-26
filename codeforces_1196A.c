#include<stdio.h>
int main()
{
long long int n;
scanf("%lld",&n);
long long int a[n],b[n],c[n],i,sum=0;
for(i=0;i<n;i++)
{
scanf("%lld%lld%lld",&a[i],&b[i],&c[i]);
}
for(i=0;i<n;i++)
{
sum =a[i]+b[i]+c[i];
printf("%lld\n",(sum/2));
}
return 0;
}
