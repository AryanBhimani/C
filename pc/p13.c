#include <stdio.h>
#include <string.h>
int main()
{
    int i=0,chr;
    char str[200];
    printf("enter the str");
    scanf("%s", str);
    while(str[i])
    {
        char chr=str[i];
        printf("%c", tolower(chr));
        i++;
    }
    return 0;
}