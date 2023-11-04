#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, count = 0, len;
    char str[101], temp;
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])

            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    for (i = 0; i < len; i++)
    {
        if (str[i] != str[i + 1])
            count++;
    }
    if(count%2==0)printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
    return 0;
}