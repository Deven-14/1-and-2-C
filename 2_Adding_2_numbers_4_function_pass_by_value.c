#include<stdio.h>

int input()
{
    int num;
    scanf("%d", &num);
    return num;
}

int requesting_input_for_num1()
{  
    printf("Enter number 1 to be added: ");
}

int requesting_input_for_num2()
{  
    printf("Enter number 2 to be added: ");
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
    requesting_input_for_num1();
    num1=input();
    requesting_input_for_num2();
    num2=input();
    sum= addition(num1, num2);
    output(num1, num2, sum);
    return 0;
}
    
