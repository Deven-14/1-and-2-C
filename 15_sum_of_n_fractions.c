#include<stdio.h>

struct fraction
{
    float nume, deno;
};

typedef struct fraction Fraction;

int input_number_of_fractions()
{
    int n;
    printf("Enter the number of fractions to be added: ");
    scanf("%d", &n);
    return n;
}

void input_n_fractions(int n, Fraction *f)
{
    for(int i=0; i<n; i++)
    {
        printf("Enter the numerator of fraction %d", i+1);
        scanf("%f", &f[i].nume);
        printf("Enter the denominatorof fraction %d", i+1);
        scanf("%f", &f[i].deno);
    }
}

float addition(Fraction *f)
{
    float sum=0;
    for(int j=0; j<n; j++)
        sum+= f[i].nume/f[i].deno;
    return sum;
}

void output(int n, float sum)
{
    printf("Sum of entered %d fractions is %f\n", n, sum);
}

int main()
{
    int n= input_number_of_fractions();
    Fraction f[n];
    input_n_fractions(n, f);
    float sum= addition(f);
    output(n, sum);
    return 0;
}
