#include<stdio.h>
#include<string.h>

void input_strings(char *str1, char *str2)
{
    printf("Enter string 1 for comparison: ");
    scanf("%s", str1);
    printf("Enter string 2 for comparison: ");
    scanf("%s", str2);
}

int compare_strings(char str1[], char str2[])
{
    int f=strcmp(str1, str2);
    return f;
}

void output(int result)
{
    if(result==0)
        printf("The strings are equal\n");
    else
        printf("The strings are unequal\n");
}

int main()
{
    char str1[20], str2[20];
    input_strings(str1, str2);
    int result=compare_strings(str1, str2);
    output(result);
    return 0;
}
