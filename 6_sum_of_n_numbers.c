#include<stdio.h>

int input_nth_number()
{
    int nth_num;
    printf("Enter the nth number: ");
    scanf("%d", &nth_num);
    return nth_num;
}

int sum_of_n_numbers(int nth_num)
{
    return (nth_num*(nth_num+1)/2)
}

void output(int nth_num, int sum)
{
    printf("Sum of numbers till %d is %d.\n", nth_num, sum);
}

int main()
{
    int nth_num, sum;
    nth_num=input_nth_number();
    sum=sum_of_n_numbers(nth_num);
    output(nth_num, sum);
    return 0;
}
