#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
int arr[25];
printf("enter the number of element",n);
scanf("%d\n",&n);
for(i=0;i<n;++i)
{
printf("enter the number",arr[i+1]);
scanf("%d",&arr[i]);
}
for(i=0;i<n;++i)
{
if(arr[0]<arr[i])
arr[0]=arr[i];
}
printf("largest number is %d",&a[0]);
return 0;
}
