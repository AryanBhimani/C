#include <stdio.h>
#include <conio.h>
int main()
{
    char upperchar,lowerchar;
    int ascii;
    printf("enter an uppercase character: ");
    scanf("%c", &upperchar);
    ascii = upperchar;
    lowerchar = ascii+32;
    printf("\n its lowercase = %c", lowerchar);
    getch();
    return 0;
}