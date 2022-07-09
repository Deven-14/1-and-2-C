#include<stdio.h>

int input_ith_num(int ith_num)
{
	int num;
	printf("Enter the number %d to be compared: ", ith_num);
	scanf("%d", &num);
	return num;
}

int compare(int num1, int num2, int num3)
{
		if(num1>num2 && num1>num3)
				return num1;
		else if(num2>num1 && num2>num3)
				return num2;
		else if(num3>num1 && num3>num2)
				return num3;
}

void output(int max_num)
{
		printf("The Greatest number is %d\n", max_num);
}

int main()
{
	int num1, num2, num3, max_num;
	num1=input_ith_num(1);
	num2=input_ith_num(2);
	num2=input_ith_num(3);
	max_num=compare(num1, num2, num3);
	output(max_num);
}
