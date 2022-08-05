#include<stdio.h>

float input_numerator_of_ith_fraction(int ith_fraction)
{
    float nume;
    printf("Enter the numerator of fraction %d : ", ith_fraction);
    scanf("%f", &nume);
    return nume;
}

float input_denominator_of_ith_fraction(int ith_fraction)
{
    float deno;
    printf("Enter the denominator of fraction %d : ", ith_fraction);
    scanf("%f", &deno);
    return deno;
}

float addition(float nume1, float deno1, float nume2, float deno2)
{
    return((nume1/deno1)+(nume2/deno2));
}

void output(float nume1, float deno1, float nume2, float deno2, float sum)
{
    printf("%f/%f + %f/%f = %f", nume1, deno1, nume2, deno2, sum);
}

int main()
{
    float nume1= input_numerator_of_ith_fraction(1);
    float deno1= input_denominator_of_ith_fraction(1);
    float nume2= input_numerator_of_ith_fraction(2);
    float deno2= input_denominator_of_ith_fraction(2);
    float sum= addition(nume1, deno1, nume2, deno2);
    output(nume1, deno1, nume2, deno2, sum);
    return 0;
}
