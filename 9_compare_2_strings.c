#include<stdio.h>
#include<string.h>

char input_string(int ith_string)
{
    char str[20];
    printf("Enter string %d for comparison: ", ith_string);
    gets(str);
    return str;
}

int compare_strings(char str1[], char str2[])
{
    int f=0;
    int l1=strlen(str1);
    int l2=strlen(str2);
    if(l1==l2)
    {
        for(int i=0; i<l1; i++)
        {
            if(str1[i]!=str2[i])
            {
                f=1;
                break;
            }
        }
    }
    else
        f=1;
    
   return f;
}

void output(int result)
{
    if(result)
        printf("The strings are unequal\n");
    else
        printf("The strings are equal\n");
}

int main()
{
    char str1[20]=input_string(1);
    char str2[20]=input_string(2);
    int result=compare_strings(str1, str2);
    output(result);
    return 0;
}
