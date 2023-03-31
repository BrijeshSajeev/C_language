#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    int n;
    printf("Enter the size of your name >> ");
    scanf("%d", &n);

    ptr = (char *)malloc(n * sizeof(char));

    printf("Enter your name >> ");
    for (int i = 0; i < n; i++)
    {
        scanf("%c", (ptr + i));
    }

    int ch = 0;
    printf("if space is not enough then enter choice 1 to goo >> ");
    scanf("%d", &ch);

    if (ch == 1)
    {
        printf("Enter the new size >> ");
        scanf("%d", &n);
        ptr = (char *)realloc(ptr, n * sizeof(char));

        printf("Enter your name >> ");
        for (int i = 0; i < n; i++)
        {
            scanf("%c", (ptr + i));
        }
    }

    printf("Your name is >> ");
    for (int i = 0; i < n; i++)
    {
        printf("%c", *(ptr + i));
    }

    free(ptr);
    ptr = NULL;
    return 0;
}