#include <stdio.h>
int main()
{
    int i, n;
    int arr[100];
    printf("Enter total number of elements: ");
    scanf("%d", &n);
    printf("\n");
    for(i = 0; i < n; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%d", &arr[i]);
    }
    for(i = 1; i < n; ++i)
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("largest element = %d", arr[0]);
    return 0;
}
