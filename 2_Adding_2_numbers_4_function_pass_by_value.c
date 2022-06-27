#include<stdio.h>

int input()
{
    int num;
    scanf("%d", &num);
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
    num1=input();
    num2=input();
    sum= addition(num1, num2);
    output(num1, num2, sum);
    return 0;
}
    
