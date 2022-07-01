#include<stdio.h>

int num1, num2;

int input_num1_and_num2()
{
    
    printf("Enter number 1 to be added: ");
    scanf("%d", &num1);
    printf("Enter number 2 to be added: ");
    scanf("%d", &num2);
    
}

int addition(int num1, int num2)
{
    return(num1+num2);
}

void output(int num1, int num2, int sum)
{
    printf("%d+%d=%d", num1, num2, sum);
}

int main()
{
    int sum;
    input_num1_and_num2();
    sum=addition(num1, num2);
    output(num1, num2, sum);
    return 0;
}
