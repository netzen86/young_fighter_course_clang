# include <stdio.h>
# include <math.h>
// ax^2 + bx + c = 0

int main(int argc, char* argv[])
{
    int a, b, c, D, sqr_count;
    sqr_count = 0;
    scanf("%d%d%d", &a, &b, &c);
    if (a == 0)
    {
        // bx + c = 0
        if (b != 0)
        {
            double x;
            x = (double)-c / b;
            if (x > 0)
            {
                sqr_count = 1;           
            }
        }
        else if (b == 0 && c == 0)
        {
            sqr_count = -1;            
        }
        printf("%d\n", sqr_count);
        return 0;
    }
    else if (c == 0)
    {
        D = (pow(b, 2) - (4*a));
    }
    else
    {
        D = (pow(b, 2) - (4*a*c));
    }

    if (D < 0)
    {
        sqr_count = 0;
    }
    else if (D == 0)
    {
        int x;
        x = -b / (2 * a);

        if (x > 0)
        {
            sqr_count = 1;           
        }
        else
        {
            sqr_count = 0;
        }
    }
    else if (D > 0)
    {
        int x1, x2;
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);

        if (x1 > 0)
        {
            sqr_count += 1;
        }
        if (x2 > 0)
        {
            sqr_count += 1;
        }
    }
    printf("%d\n", sqr_count);
    return 0;
}