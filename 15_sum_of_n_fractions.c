#include<stdio.h>

int gcd(int x, int y)
{
    while(y!=0)
    {
        int rem = x%y;
        x=y;
        y=rem;
    }
    return x;
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

void input_n_fractions(int n, Fraction *numbers)
{
    for(int i=0; i<n; i++)
    {
        printf("Enter the numerator of fraction %d: ", i+1);
        scanf("%d", &numbers[i].num);
        printf("Enter the denominator of fraction %d: ", i+1);
        scanf("%d", &numbers[i].denum);
    }
}

Fraction simplify_fraction(Fraction f)
{
    int divisor = gcd(f.num, f.denum);
    f.num /= divisor;
    f.denum /= divisor;
    return f;
}

Fraction addition(int n, Fraction *numbers)
{
    Fraction sum;
    int i = 0;
    sum.num = numbers[0].num;
    sum.denum = numbers[0].denum;
    for(i=1; i<n; i++)
    {
        sum.num = numbers[i].num * sum.denum + sum.num * numbers[i].denum;
        sum.denum = sum.denum * numbers[i].denum;
    }
    sum = simplify_fraction(sum);
    return sum;
}

void output(int n, Fraction *numbers, Fraction sum)
{
    for(int i=0; i<n-1; i++)
        printf("%d/%d + ", numbers[i].num, numbers[i].denum);
    printf("%d/%d = %d/%d\n", numbers[n-1].num, numbers[n-1].denum, sum.num, sum.denum);
}

int main()
{
    int n= input_number_of_fractions();
    Fraction numbers[n];
    input_n_fractions(n, numbers);
    Fraction sum= addition(n, numbers);
    output(n, numbers, sum);
    return 0;
}
