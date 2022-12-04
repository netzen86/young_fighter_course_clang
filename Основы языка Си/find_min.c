# include <stdio.h>


int findMin(int a, int b, int c)
{
    if (a < b && a < c)
    {
        return a;
    }
    else if (b < a && b < c)
    {
        return b;
    }
    else if (c < a && c < b)
    {
        return c;
    }
    return 0;
}

int main()
{
    int d, f, g;
    scanf("%d%d%d", &d, &f, &g);
    printf("%d", findMin(d, f, g));
}
