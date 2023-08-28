#include <stdio.h>
int main()
{
    int a[20][20],i,j,row,column;
    int max=a[0][0];
    printf("enter the row");
    scanf("%d", &row);
    printf("enter the column");
    scanf("%d", &column);
    
    printf("enter the elements of matrix");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d", &a[i][j]); 
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
    }
    if(a[i][j]>max)
    {
        max=a[i][j];
    }
    printf("largest element is:%d",max);
}