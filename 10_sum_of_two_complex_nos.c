#include<stdio.h>

struct complex
{
    float real, imag;
};

struct complex input_ith_complex_num(int ith_num)
{
    struct complex num;
    printf("Enter real part of complex number %d: ", ith_num);
    scanf("%f", &num.real);
    printf("Enter the imaginary part of complex number %d: ", ith_num);
    scanf("%f", &num.imag);
    return num;
}

struct complex addition(struct complex num1, struct complex num2)
{
    struct complex sum;
    sum.real= num1.real + num2.real;
    sum.imag= num1.imag + num2.imag;
    return sum;
}

void output(struct complex sum)
{
    printf("Sum of the entered complex numbers is %f + i%f\n", sum.real, sum.imag);
}

int main()
{
    struct complex sum, num1, num2;
    num1=input_ith_complex_num(1);
    num2=input_ith_complex_num(2);
    sum=addition(num1, num2);
    output(sum);
    return 0;
}
  