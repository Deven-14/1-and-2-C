#include<stdio.h>

struct fraction
{
    int num, denum;
};

typedef struct fraction Fraction;

int gcd(int m, int n)
{
    while(n!=0)
    {
        int rem = m%n;
        m=n;
        n=rem;
    }
    return m;
}

Fraction input_ith_fraction(int ith_fraction, char ordinal[3])
{
    Fraction f;
    printf("Enter the numerator of %d%s fraction: ", ith_fraction, ordinal);
    scanf("%d", &f.num);
    printf("Enter the denominator of %d%s fraction: ", ith_fraction, ordinal);
    scanf("%d", &f.denum);
    return f;
}

Fraction simplify_fraction(Fraction fract)
{
    int divisor = gcd(fract.num, fract.denum);
    fract.num/= divisor;
    fract.denum/= divisor;
    return fract;
}

Fraction addition(Fraction f1, Fraction f2)
{
    Fraction sum;
    sum.denum = f1.denum*f2.denum;
    sum.num = (f1.num*f2.denum) + (f2.num*f1.denum);
    sum = simplify_fraction(sum);
    return sum;
}

void output(Fraction f1, Fraction f2, Fraction sum)
{
    printf("%d/%d + %d/%d = %d/%d", f1.num, f1.denum, f2.num, f2.denum, sum.num, sum.denum);
}

int main()
{
    Fraction f1 = input_ith_fraction(1, "st");
    Fraction f2 = input_ith_fraction(2, "nd");
    Fraction sum = addition(f1, f2);
    output(f1, f2, sum);
    return 0;
}
