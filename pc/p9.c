#include <stdio.h>
int main()
{
    int n1,n2,i,sum=0;
    printf("enter the n1");
    scanf("%d", &n1);
    printf("enter the n2");
    scanf("%d", &n2);
    for(i=n1;i<=n2;i++);
    {
        if(i%2==0)
        {
            printf("%d",i);
            sum++;
        }
        printf("total of odd number is %d \n",sum);
    }    
}