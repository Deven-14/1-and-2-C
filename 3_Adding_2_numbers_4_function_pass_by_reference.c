#include<stdio.h>

int input_num1_num2(int *num1, int *num2)
{
    printf("Enter number 1 to be added: ");
    scanf("%d", num1);
    printf("Eneter number 2 to be added: ");
    scanf("%d", num2);
}

int add(int *num1, int *num2)
{
    return(*num1 + *num2);
}

void output(int *num1, int *num2, int *sum)
{
    printf("%d+%d=%d", *num1, *num2, *sum);
}

int main()
{
    int num1, num2, sum;
    input_num1_num2(&num1, &num2);
    sum=add(&num1, &num2);
    output(&num1, &num2, &sum);
    return 0;
}
