#include<stdio.h>
struct student
{
    char name [30];
    int marks [5];
    int total;
    float percentage;
};
int main()
{
    struct student std;
    int i;

    printf("enter name:");
    gets(std.marks);

    printf("enter marks: \n");
    std.total=0;
    for(i=0; i<5; i++)
    {
        printf("marks in subject %d: ", i+1);
        scanf("%d", &std.marks[i]);
        std.total+=std.marks[i];
    }
    std.percentage=(float)((float)std.total/(float)500)*100;
    printf("percentage is %d", std.percentage);

    return 0;
}
