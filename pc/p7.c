#include <stdio.h>
int main()
{
    int num1,num2,f,i,j;

    printf("enter n");
    scanf("%d", &num1);
    printf("enter m");
    scanf("%d", &num2);

    printf("prime numders are");
    for(i=num1+1;i<num2;i++)

    {
        f=0;
        for(j=2;j<=i/2;++j)

        {
            if(i%j==0)

            {
                f=1;
                break;
            }
        }

        if(f=0)
        printf("%d \n",i);
    }
    return 0;
}

