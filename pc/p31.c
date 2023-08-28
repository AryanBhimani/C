#include <stdio.h>
struct student
{
    char name[50];
    int agr;
};

// function prototype 
void dislay(struct  student s);

int main()
{
    struct student s1;

    printf ("Enter name: ");

    // read string input from the user until \n is entered
    // \n is discrded
    scanf ("%[^\n]%*c", s1.name);

    printf ("enter age: ");
    scanf ("%d", &s1.agr);

    display(s1); // passing struct as an argument 

    return 0;
}
void display (struct student s)
{
    printf (" \n Displaying information \n");
    printf ("Name: %s", s.name);
    printf (" \n Age: %d", s.agr);
}