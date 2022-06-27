#include<stdio.h>

int input_num1()
{
    int num;
    printf("Enter number 1 to be added: ");
    scanf("%d", &num);
    return num;
}

int input_num2()
{
    int num;
    printf("Enter number 2 to be added: ");
    scanf("%d", &num);
    return num;
}

int addition(int num1, int num2)
{
    return(num1+num2);
}

int output(int num1, int num2, int sum)
{
    printf("%d+%d=%d", num1, num2, sum);
}

int main()
{
    int num1, num2, sum;
    num1=input_num1();
    num2=input_num2();
    sum=addition(num1, num2);
    output(num1, num2, sum);
    return 0;
}
