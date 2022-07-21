#include<stdio.h>

int input_number_of_nos()
{   
    int n;
    printf("Enter the total numbers you want to add: ");
    scanf("%d", &n);
    return n;
}

int input_n_numbers(int *a[n])
{   
    
    for(int i=0; i<n; i++)
    {
        printf("Enter the %dth number: ", i+1);
        scanf("%d", a[i]);
    }
}

int sum_of_n_numbers(int n, int a[n])
{
    int sum=0;
    for(int j=0; j<n; j++)
    {
        sum+=a[j];
    }
    return sum;
}

void output_sum(int sum)
{
    printf("Sum of entered n numbers is %d.\n", sum);
}

int main()
{
    int n, sum;
    n=input_number_of_nos();
    int a[n];
    input_n_numbers(&a[n]);
    sum=sum_of_n_numbers(n, a[n]);
    output_sum(sum);
    return 0;
}
    
