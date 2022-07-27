#include<stdio.h>
#include<math.h>

int input_num()
{   
    int num;
    printf("Enter a number to find its square root: ");
    scanf("%d", &num);
    return num;
}

int square_root(int num)
{
    return(sqrt(num));
}    

void output_root(int num, int root)
{
    printf("Square root of %d is %d", num, root);
}

int main()
{
    int num, root;
    num=input_num();
    root=square_root(num);
    output_root(num, root);
    return 0;
}
