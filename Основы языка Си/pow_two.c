# include <stdio.h>

int main()
{
    int base, number, power, i;

    scanf("%d", &number);
    base = 2;
    power = 1;
    for (i = 1; power != number; ++i)
    {
        if (i == number)
        {
            break;
        }
        power = power * base;
    }
    if (power == number)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}