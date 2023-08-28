#include<stdio.h>
int main()
{
    int var=10;
    int *ptr1;
    int **ptr2;
    int ***ptr3;
    int ****ptr4;

    ptr1=&var;
    ptr2=&ptr1;
    ptr3=&ptr2;
    ptr4=&ptr3;

    printf("value of var %d", var);
    printf("value of *ptr1 %d", *ptr1);
    printf("value of **ptr2 %d", **ptr2);
    printf("value of ***ptr3 %d", ***ptr3);
    printf("value of ****ptr4 %d", ****ptr4);
}