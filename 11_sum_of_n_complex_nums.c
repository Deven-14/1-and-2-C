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

void input_n_complex_nums(int n, Complex *nums)
{  
    for(int i=1; i<=n; i++)
    { 
        printf("Enter the real part of the %dth complex number: ", i);
        scanf("%f", &nums[i].real);
        printf("Enter the imaginary part of the %dth complex number: ", i);
        scanf("%f", &nums[i].imag);
    }
}

Complex addition(int n, Complex *nums)
{
    Complex sum;
    sum.real=0;
    sum.imag=0;
    for(int  i=1; i<=n; i++)
    {
        sum.real+=nums[i].real;
        sum.imag+=nums[i].imag;
    }
    return sum;
}

void output(int n, Complex sum)
{
    printf("Sum of entered %d complex numbers is %f + i%f\n", n, sum.real, sum.imag);
}

int main()
{
    int n=input_number_of_comples_nos();
    Complex nums[n];
    input_n_complex_nums(n, nums);
    Complex sum=addition(n, nums);
    output(n, sum);
    return 0;
}
