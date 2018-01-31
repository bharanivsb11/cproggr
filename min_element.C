#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
int arr[20];
printf("enter the number of elements",n);
scanf("%d",&n);
for(i=0;i<=n;++i)
{
printf("enter the number",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<=n;++i)
{
if(arr[0]>arr[i])
arr[0]=arr[i];
}
printf("smallest element is %d",arr[0]);
return 0;
}
