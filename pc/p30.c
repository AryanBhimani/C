#include <stdio.h>
#include <math.h>
int main()
{
    float num, root;
    printf ("enter a number: ");
    scanf ("%f", &num);

    // computes the spuare root of num and stores in root.
    root = sqrt(num);

    printf ("square root of %.2f = %.2f", num, root);
    return 0;
}
