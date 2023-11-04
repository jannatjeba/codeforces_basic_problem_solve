#include <stdio.h>
#include <string.h>
int main()
{
    char str[10001];
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] > 'Z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
    return 0;
}