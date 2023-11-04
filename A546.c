#include <stdio.h>
int main()
{
    int price, doller, banana, total = 0;
    scanf("%d%d%d", &price, &doller, &banana);
    for (int i = 1; i <= banana; i++)
    {
        total = total + (i * price);
    }

    if (total > doller)
        printf("%d", total - doller);
    else
        printf("0\n");
}