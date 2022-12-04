# include <stdio.h>
# include <math.h>

int main()
{
    int i, x, y, num, power;

    x = 2;
    num = 1;
    power = 1;
    scanf("%d", &y);

    while (power < y)
    {
        power = pow(num, x);
        if (power > y)
        {
            return 0;
        }
        printf("%d ", power);
        num += 1;
    }
    return 0;
}