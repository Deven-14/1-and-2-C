#include<stdio.h>

int input_num(int ith_num)
{
    int num;
    if(ith_num == 1)
    {
        printf("Enter number 1 to be added: ");
        scanf("%d", &num);
    }
    else if(ith_num == 2)
    {
        printf("Enter number 2 to be added: ");
        scanf("%d", &num);
    }        
    return num;
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
    int num1, num2, sum;
    num1=input_num(1);
    num2=input_num(2);
    sum=addition(num1, num2);
    output(num1, num2, sum);
    return 0;
}
