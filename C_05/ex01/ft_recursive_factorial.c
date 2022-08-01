#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb > 0)
    {
        if (nb == 1)
            return (1);
        else
            return (nb * ft_recursive_factorial(nb-1));
    }
    else
        return (0);
}

int main(void)
{
    printf("%d", ft_recursive_factorial(0));
    return (0);
}