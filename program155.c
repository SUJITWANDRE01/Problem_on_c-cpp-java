#include<stdio.h>

int CountSmall(char *ptr)
{
    int iCount = 0;

    while(*ptr != '\0')
    {
        if(*ptr >= 'a' && *ptr <= 'z')
        {
            iCount++;
        }
        ptr++;
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);   

    printf("count of small letters : %d\n",iRet);

    return 0;
}