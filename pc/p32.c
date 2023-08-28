#include <stdio.h>
typedef struct complex
{
    float real;
    float imag;
} complex;

void addNumbers (complex c1, complex c2, complex *result);

int main()
{
    complex c1, c2, result;

    printf("for first namder, \n");
    printf("enter real part: ");
    scanf("%f", &c1.real);
    printf("enter imaginary part: ");
    scanf("%f", &c1.imag);

    printf("for second numder, \n");
    printf("enter real part: ");
    scanf("%f", &c2.imag);
    printf("enter umaginary part: ");
    scanf("%f", &c2.imag);

    addNumbers(c1, c2, &result);
    printf("\n result.real = %.1f\n", result.real);
    printf("result.imag = %.1f", result.imag);

    return 0;
}
void addNumbers(complex c1, complex c2, complex *result)
{
    result->real = c1.real + c2.real;
    result->imag =c1.imag + c2.imag;
}