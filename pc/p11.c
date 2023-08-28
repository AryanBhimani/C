#include <stdio.h>
int main()
{
    int a[20],size,i;
    int arr[20];
    printf("enter the array size");
    scanf("%d", &size);
    printf("enter the elements");
    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
        {
            for(i=0;i<size;i++)
            {
                arr[i]=a[i];
            }
        }
        printf("after coppy array 2 is");
        for(i=0;i<size;i++)
        {
            printf("%d \n", arr[i]);
        }
    }
}