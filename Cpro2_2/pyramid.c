#include <stdio.h>

int main()
{
    char ch;
    scanf_s("%c", &ch);
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        int j = 0;
        for (j = 0; j < 4-i; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%c",ch);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
