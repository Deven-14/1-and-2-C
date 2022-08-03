#include<stdio.h>

int input_number_of_comples_nos()
{
    int n;
    printf("Enter the number of complex numbers to be added: ");
    scanf("%d", &n);
    return n;
}

struct complex
{
    float real, imag;
};

typedef struct complex Complex;

void input_ith_complex_num(int n, Complex *num)
{  
    for(int i=1; i<=n; i++)
    { 
        printf("Enter the real part of the %dth complex number: ", n);
        scanf("%f", num[i].real);
        printf("Enter the imaginary part of the %dth complex number: ", n);
        scanf("%f", num[i].imag);
    }
}

Complex addition(int n, Complex *num)
{
    Complex sum;
    sum.real=0;
    sum.imag=0;
    for(int  i=1; i<=n; i++)
    {
        sum.real+=num[i].real;
        sum.imag+=num[i].imag;
    }
    return sum;
}

void output(int n, Complex sum)
{
    printf("Sum of entered %d complex numbers is %f + i%f\n", n, sum.real, sum.imag);
}

int main()
{
    Complex sum;
    int n, i;
    n=input_number_of_comples_nos();
    Complex num[n];
    input_ith_complex_num(n, num);
    sum=addition(n, num);
    output(n, sum);
    return 0;
}
