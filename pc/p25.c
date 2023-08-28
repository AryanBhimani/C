#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[100], i, limit;
    printf("how many elements you want to store inside the array:");
    scanf("%d", &limit);
    printf("enter any %d array elements:", limit);
    for(i=0; i<limit; i++)
        scanf("%d", &arr[i]);
    printf("\n\n values stored at even position (with array and its index) are:\n");
    for(i=0; i<limit; i++)
    {
        if(i%2==0)
            printf("arr[%d] = %d\n", i, arr[i]);    
    }
    getch();
    return 0;
}