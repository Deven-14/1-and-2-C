#include <stdio.h>

int input_ith_num(int ith_num, char ordinal[3])
{
	int num;
	printf("Enter %d%s number to find the largest of 3 numbers: ", ith_num, ordinal);
	scanf("%d", &num);
	return num;
}

int max(int num1, int num2, int num3)
{
	if(num1>num2 && num1>num3)
		return num1;
	else if(num2>num3)
		return num2;
	else
		return num3;
}

void output(int max_num)
{
	printf("The Greatest number is %d\n", max_num);
}

int main()
{
	int num1, num2, num3, max_num;
	num1=input_ith_num(1, "st");
	num2=input_ith_num(2, "nd");
	num3=input_ith_num(3, "rd");
	max_num=max(num1, num2, num3);
	output(max_num);
}
