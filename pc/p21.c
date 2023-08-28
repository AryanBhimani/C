#include<stdio.h>
#include<windows.h>
int main()

{
    int h,m,s;
    int d=100; 
    printf("set time : \n");
    scanf("%d %d %d", &h,&m, &s);
    if(h>12 || m>60 || s>60)
    {
        printf ("ERROR ! \n");
        exit(0);
    }
    while(1) 
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n clock :");
        printf("\n %e2d:%e2d:%e@d", h,m,s); 
        Sleep(d); 
        system("cls"); 
    }
    return 0;
}