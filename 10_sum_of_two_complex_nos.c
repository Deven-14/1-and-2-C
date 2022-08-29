#include<stdio.h>

struct complex
{
    float real, imag;
};

typedef struct complex Complex;

Complex input_ith_complex_num(int ith_num, char ordinal[3])
{
    struct complex num;
    printf("Enter real part of %d%s complex number: ", ith_num, ordinal);
    scanf("%f", &num.real);
    printf("Enter the imaginary part of %d%s complex number: ", ith_num, ordinal);
    scanf("%f", &num.imag);
    return num;
}

Complex addition(Complex num1, Complex num2)
{
    struct complex sum;
    sum.real= num1.real + num2.real;
    sum.imag= num1.imag + num2.imag;
    return sum;
}

void output(Complex sum)
{
    printf("Sum of the entered complex numbers is %f + i%f\n", sum.real, sum.imag);
}

int main()
{
    Complex sum, num1, num2;
    num1=input_ith_complex_num(1, "st");
    num2=input_ith_complex_num(2, "nd");
    sum=addition(num1, num2);
    output(sum);
    return 0;
}
  
