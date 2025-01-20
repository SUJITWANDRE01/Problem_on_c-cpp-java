#include<stdio.h>

int main()
{
    char Arr[30];
    char *ptr = Arr;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("%c\n",*ptr);
    ptr++;

    printf("%c\n",*ptr);
    ptr++;
    
    printf("%c\n",*ptr);
    ptr++;
    
    printf("%c\n",*ptr);
    ptr++;
    
    printf("%c\n",*ptr);
    ptr++;
    
    return 0;
}