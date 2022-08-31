#include<stdio.h>

int gcd(int x, int y)
{
    if(y==0)
        return x;
    else
        return gcd(y, x%y);
}

struct fraction
{
    int num, denum;
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
        scanf("%d", &f[i].num);
        printf("Enter the denominatorof fraction %d: ", i+1);
        scanf("%d", &f[i].denum);
    }
}

Fraction simplify_fraction(Fraction f)
{
    int divisor = gcd(f.num, f.denum);
    f.num /= divisor;
    f.denum /= divisor;
    return f;
}

Fraction addition(int n, Fraction *f)
{
    Fraction sum;
    sum.denum = f[0].denum*f[1].denum;
    sum.num = f[0].num*f[1].denum + f[1].num*f[0].denum;
    for(int i=2; i<n; i++)
    {
        sum.num = f[i].num*sum.denum + sum.num*f[i].denum;
        sum.denum = sum.denum*f[i].denum;
    }
    simplify_fraction(sum);
    return sum;
}

void output(int n, Fraction *f, Fraction sum)
{
    for(int i=0; i<n-1; i++)
        printf("%d/%d + ", f[i].num, f[i].denum);
    printf("%d/%d = %d/%d\n", f[n-1].num, f[n-1].denum, sum.num, sum.denum);
}

int main()
{
    int n= input_number_of_fractions();
    Fraction f[n];
    input_n_fractions(n, f);
    Fraction sum= addition(n, f);
    output(n, f, sum);
    return 0;
}
