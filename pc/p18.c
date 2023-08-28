#include<stdio.h>
#include<string.h>
int main()
{
    char str[]={"madam"};
    int i,flag=0;
    int n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]!=str[n-i-1])
        {
            flag=1;
            break;
        }
    }    
    if (flag==1)
    {
        printf("strien is not palidrome");
    }
    else
    {
        printf("strien is not palidrome");
    }
}