#include <stdio.h>
int main()
{
    int n,temp,a[3],i;
    printf("enter the numder");
    scanf("%d", &n);
    printf("enter the elements");
    for(int i=0;i<n;i++);
    {
        scanf("%d", &a[i]);
    }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[j];
                    a[j]=a[j];
                    a[j]=temp;
                }
            }
        }  
        printf("after asecending order");
        for(int i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
        
}