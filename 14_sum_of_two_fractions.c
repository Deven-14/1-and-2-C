#include<stdio.h>

struct fraction
{
    int num, denum;
};

typedef struct fraction Fraction;

int gcd(int m, int n)
{
    if(n==0)
        return m;
    else
        return gcd(n , m%n);
}

Fraction input_ith_fraction(int ith_fraction)
{
    Fraction f;
    printf("Enter the numerator of fraction %d : ", ith_fraction);
    scanf("%d", &f.num);
    printf("Enter the denominator of fraction %d : ", ith_fraction);
    scanf("%d", &f.denum);
    return f;
}

Fraction addition(Fraction f1, Fraction f2)
{
    int lcm =(f1.denum*f2.denum)/(gcd(f1.denum, f2.denum));
    Fraction sum;
    sum.denum = lcm;
    sum.num = (f1.num*lcm)/f1.denum + (f2.num*lcm)/f2.denum;
    return sum;
}

void output(Fraction f1, Fraction f2, Fraction sum)
{
    printf("%d/%d + %d/%d = %d/%d", f1.num, f1.denum, f2.num, f2.denum, sum.num/gcd(sum.num, sum.denum), sum.denum/gcd(sum.num, sum.denum));
}

int main()
{
    Fraction f1 = input_ith_fraction(1);
    Fraction f2 = input_ith_fraction(2);
    Fraction sum = addition(f1, f2);
    output(f1, f2, sum);
    return 0;
}
