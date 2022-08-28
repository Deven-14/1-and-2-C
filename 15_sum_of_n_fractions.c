#include<stdio.h>

struct fraction
{
    float num, denum;
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
        printf("Enter the numerator of fraction %d: ", i+1);
        scanf("%f", &f[i].num);
        printf("Enter the denominatorof fraction %d: ", i+1);
        scanf("%f", &f[i].denum);
    }
}

Fraction addition(int n, Fraction *f)
{
    Fraction sum;
    int lcm = (f[0].denum*f[1].denum)/gcd(f[0].denum, f[1].denum);
    sum.denum=lcm;
    sum.num = (f[0].num*lcm)/f[0].denum + (f[1].num*lcm)/f[1].denum;
    for(int i=2; i<n; i++)
    {
        lcm = (f[i].denum*sum.denum)/gcd(f[i].denum, sum.denum);
        sum.denum = lcm;
        sum.num = (f[i].num*lcm)/f[i].denum + (sum.sum*lcm)/sum.denum;
    }
    return sum;
}

void output(int n, Fraction *f, float sum)
{
    for(int i=0; i<n; i++)
        printf("+ %d/%d ", f[i].num, f[i].denum);
    printf(" = %d/%d\n", sum.num, sum.denum);
}

int main()
{
    int n= input_number_of_fractions();
    Fraction f[n];
    input_n_fractions(n, f);
    float sum= addition(n, f);
    output(n, f, sum);
    return 0;
}
