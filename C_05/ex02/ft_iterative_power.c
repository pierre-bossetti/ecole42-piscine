#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i;
    int res;

    if (nb == 0 && power == 0)
        return (1);
    else if (power < 1)
        return (0);
    else
    {
        i = 1;
        res = nb;
        while (i < power)
        {
            res = res * nb;
            i++;
        }
        return (res);
    }
}

/*
int main(void)
{
    printf("%d", ft_iterative_power(2, 0));
    return (0);
}
*/
